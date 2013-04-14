(function ($) {

  Drupal.behaviors.leaflet_geojson_formatter = {
    attach: function (context, settings) {

      Drupal.behaviors.leaflet_geojson_formatter.drawnItems = {};

      if (Drupal.settings.leaflet_geojson_formatter) {
        $.each(Drupal.settings.leaflet_geojson_formatter, function(id, data) {
          $.each(Drupal.settings.leaflet, function(key, value) {
            if (value.mapId == data.map) {
              map = Drupal.settings.leaflet[key].lMap;
            }
          });

          if (!map) {
            return false;
          }

          Drupal.behaviors.leaflet_geojson_formatter.drawnItems[id] = new L.GeoJSON(data.features);

          map.addLayer(Drupal.behaviors.leaflet_geojson_formatter.drawnItems[id]);

          var bounds = Drupal.behaviors.leaflet_geojson_formatter.drawnItems[id].getBounds();
          map.fitBounds(bounds);

        });
      }

    }
  };

})(jQuery);
