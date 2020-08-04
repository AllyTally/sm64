#include "src/game/envfx_snow.h"

const GeoLayout star_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(1, star_obj_star_bmdout_mesh),
		GEO_DISPLAY_LIST(1, star_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
