<?php
/**
 * @file
 * Template for Panopoly bryant Flipped.
 *
 * Variables:
 * - $css_id: An optional CSS id to use for the layout.
 * - $content: An array of content, each item in the array is keyed to one
 * panel of the layout. This layout supports the following sections:
 */
?>

<div class="panel-display bryant-flipped clearfix <?php if (!empty($classes)) { print $classes; } ?><?php if (!empty($class)) { print $class; } ?>" <?php if (!empty($css_id)) { print "id=\"$css_id\""; } ?>>

  <div class="container">
    <div class="row-fluid">
      <div class="span9 content panel-panel">
        <div class="panel-panel-inner">
          <?php print $content['contentmain']; ?>
        </div>
      </div>
      <div class="span3 sidebar panel-panel">
        <div class="panel-panel-inner">
          <?php print $content['sidebar']; ?>
        </div>
      </div>
    </div>
  </div>

</div><!-- /.bryant-flipped -->
