<?php

/**
 * Implementation of hook_openlayers_presets().
 */
function parcel_map_openlayers_presets() {
  $export = array();

  $openlayers_presets = new stdClass;
  $openlayers_presets->disabled = FALSE; /* Edit this to true to make a default openlayers_presets disabled initially */
  $openlayers_presets->api_version = 1;
  $openlayers_presets->name = 'parcel_map';
  $openlayers_presets->title = 'Parcel Map';
  $openlayers_presets->description = 'Map showing settlement land parcels, zoomed to a single parcel';
  $openlayers_presets->data = array(
    'width' => 'auto',
    'height' => '350px',
    'image_path' => '',
    'css_path' => '',
    'proxy_host' => '',
    'hide_empty_map' => 0,
    'center' => array(
      'initial' => array(
        'centerpoint' => '-138.53210448651, 61.185624679907',
        'zoom' => '8',
      ),
      'restrict' => array(
        'restrictextent' => 0,
        'restrictedExtent' => '',
      ),
    ),
    'behaviors' => array(
      'openlayers_behavior_popup' => array(
        'layers' => array(
          'openlayers_kml_layer_node_403' => 0,
        ),
      ),
      'openlayers_behavior_fullscreen' => array(
        'activated' => 0,
      ),
      'openlayers_behavior_layerswitcher' => array(
        'ascending' => 1,
        'roundedCorner' => 1,
        'roundedCornerColor' => 'darkblue',
      ),
      'openlayers_behavior_navigation' => array(
        'zoomWheelEnabled' => 0,
      ),
      'openlayers_behavior_dragpan' => array(),
      'openlayers_behavior_panzoombar' => array(),
      'openlayers_behavior_scaleline' => array(),
      'openlayers_behavior_zoomtolayer' => array(
        'zoomtolayer' => 'google_satellite',
        'point_zoom_level' => '8',
      ),
      'openlayers_behavior_drawfeatures' => array(
        'feature_types' => array(
          'point' => 'point',
          'path' => 0,
          'polygon' => 0,
        ),
        'feature_limit' => '1',
        'element_id' => '',
      ),
    ),
    'default_layer' => 'google_normal',
    'layers' => array(
      'google_satellite' => 'google_satellite',
      'google_normal' => 'google_normal',
      'google_physical' => 'google_physical',
      'openlayers_kml_layer_node_403' => 'openlayers_kml_layer_node_403',
    ),
    'layer_styles' => array(
      'parcel_map_openlayers_1' => array(
        'default' => 'default',
        'select' => 'default_select',
        'temporary' => 'invisible',
      ),
    ),
    'layer_activated' => array(
      'openlayers_kml_layer_node_403' => 'openlayers_kml_layer_node_403',
    ),
    'layer_switcher' => array(
      'openlayers_kml_layer_node_403' => 'openlayers_kml_layer_node_403',
    ),
    'projection' => '900913',
    'displayProjection' => '4326',
    'styles' => array(
      'default' => 'default',
      'select' => 'default',
      'temporary' => 'default',
    ),
  );
  $export['parcel_map'] = $openlayers_presets;

  return $export;
}
