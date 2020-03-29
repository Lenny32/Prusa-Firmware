
/*-----------------------------------
 PREHEAT SETTINGS
 *------------------------------------*/

#define FARM_PREHEAT_HOTEND_TEMP 250
#define FARM_PREHEAT_HPB_TEMP 80

#define PLA_PREHEAT_HOTEND_TEMP 215
#define PLA_PREHEAT_HPB_TEMP 60

#define ASA_PREHEAT_HOTEND_TEMP 260
#define ASA_PREHEAT_HPB_TEMP 105

#define ABS_PREHEAT_HOTEND_TEMP 255
#define ABS_PREHEAT_HPB_TEMP 100

#define HIPS_PREHEAT_HOTEND_TEMP 220
#define HIPS_PREHEAT_HPB_TEMP 100

#define PP_PREHEAT_HOTEND_TEMP 254
#define PP_PREHEAT_HPB_TEMP 100

#define PET_PREHEAT_HOTEND_TEMP 230
#define PET_PREHEAT_HPB_TEMP 85

#define FLEX_PREHEAT_HOTEND_TEMP 240
#define FLEX_PREHEAT_HPB_TEMP 50

#define COLD_PLA_PREHEAT_HOTEND_TEMP 170
#define COLD_PLA_PREHEAT_HPB_TEMP 60

#define COLD_PET_PREHEAT_HOTEND_TEMP 170
#define COLD_PET_PREHEAT_HPB_TEMP 85

#define PREHEAT_HOTEND_PLA_TEMP_ONLY 215
#define PREHEAT_HPB_PLA_TEMP_ONLY 0

#define PREHEAT_HOTEND_PET_TEMP_ONLY 230
#define PREHEAT_HPB_PET_TEMP_ONLY 0

//Low temperature while probing for the first layer configuration
#define ENABLE_LOW_TEMP_FIRSTLAYER_CALIBRATION
#ifdef ENABLE_LOW_TEMP_FIRSTLAYER_CALIBRATION
    #define LOW_TEMP_FIRSTLAYER_CALIBRATION 170
#endif