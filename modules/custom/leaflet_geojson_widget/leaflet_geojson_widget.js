(function ($) {

  Drupal.behaviors.leaflet_geojson_widget = {
    attach: function (context, settings) {
      if (Drupal.settings.leaflet_geojson_widget) {

        var map = null;
        var settings = null;

        Drupal.behaviors.leaflet_geojson_widget.drawnItems = {};

        $.each(Drupal.settings.leaflet_geojson_widget, function(id, valueDraw) {

          $.each(Drupal.settings.leaflet, function(key, value) {
            if (value.mapId == valueDraw.map) {
              map = Drupal.settings.leaflet[key].lMap;
              settings = valueDraw;
            }
          });

          Drupal.behaviors.leaflet_geojson_widget.drawnItems[id] = new L.GeoJSON();
          map.addLayer(Drupal.behaviors.leaflet_geojson_widget.drawnItems[id]);


          if (settings.features) {
            var oldJSON = new L.GeoJSON(settings.features);

            oldJSON.addTo(Drupal.behaviors.leaflet_geojson_widget.drawnItems[id]);
          }


          var drawControl = new L.Control.Draw({
            draw: {
              polygon: settings.tools.polygon,
              circle: settings.tools.circle,
              polyline: settings.tools.polyline,
              rectangle: settings.tools.rectangle,
              marker: settings.tools.marker
            },
            edit: {
              featureGroup: Drupal.behaviors.leaflet_geojson_widget.drawnItems[id]
            }
          });

          map.addControl(drawControl);

          map.on('draw:created', function (e) {
            var type = e.layerType,
              layer = e.layer;

            Drupal.behaviors.leaflet_geojson_widget.drawnItems[id].addLayer(layer);

            var json = Drupal.behaviors.leaflet_geojson_widget.drawnItems[id].toGeoJSON();

            $('#' + settings.textfield).text(JSON.stringify(json));
          });

          map.on('draw:edited', function (e) {
            var type = e.layerType,
              layer = e.layer;

            var json = Drupal.behaviors.leaflet_geojson_widget.drawnItems[id].toGeoJSON();

            $('#' + settings.textfield).text(JSON.stringify(json));
          });

        });
      }
    }
  };

})(jQuery);
