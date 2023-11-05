// -----------------------------------------------------------------------------------
// Bitmaps, for UserInterface

#include "../../libApp/u8g2ext/u8g2_ext.h"

static unsigned char align1_bits[] U8X8_PROGMEM = {
  0x00, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x1c, 0x00, 0x1c, 0x00, 0x00, 0x00, 0xc0, 0x03, 0xc0, 0x00, 0x40, 0x01, 0x50, 0x02, 0x18, 0x04, 0x10, 0x08, 0x10, 0x10, 0x10, 0x20, 0x00, 0x00, 0x00, 0x00 };

static unsigned char align2_bits[] U8X8_PROGMEM = {
  0x00, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x1c, 0x00, 0x1c, 0x00, 0x00, 0x00, 0xc0, 0x03, 0xc0, 0x00, 0x40, 0x01, 0x48, 0x02, 0x14, 0x04, 0x10, 0x08, 0x08, 0x10, 0x04, 0x20, 0x1c, 0x00, 0x00, 0x00 };

static unsigned char align3_bits[] U8X8_PROGMEM = {
  0x00, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x1c, 0x00, 0x1c, 0x00, 0x00, 0x00, 0xc0, 0x03, 0xc0, 0x00, 0x40, 0x01, 0x40, 0x02, 0x1c, 0x04, 0x10, 0x08, 0x18, 0x10, 0x10, 0x20, 0x1c, 0x00, 0x00, 0x00 };

static unsigned char align4_bits[] U8X8_PROGMEM = {
  0x00, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x1c, 0x00, 0x1c, 0x00, 0x00, 0x00, 0xc0, 0x03, 0xc0, 0x00, 0x40, 0x01, 0x40, 0x02, 0x14, 0x04, 0x14, 0x08, 0x1c, 0x10, 0x10, 0x20, 0x10, 0x00, 0x00, 0x00 };

static unsigned char align5_bits[] U8X8_PROGMEM = {
  0x00, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x1c, 0x00, 0x1c, 0x00, 0x00, 0x00, 0xc0, 0x03, 0xc0, 0x00, 0x40, 0x01, 0x40, 0x02, 0x1c, 0x04, 0x04, 0x08, 0x1c, 0x10, 0x10, 0x20, 0x1c, 0x00, 0x00, 0x00 };

static unsigned char align6_bits[] U8X8_PROGMEM = {
  0x00, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x1c, 0x00, 0x1c, 0x00, 0x00, 0x00, 0xc0, 0x03, 0xc0, 0x00, 0x40, 0x01, 0x40, 0x02, 0x1c, 0x04, 0x04, 0x08, 0x1c, 0x10, 0x14, 0x20, 0x1c, 0x00, 0x00, 0x00 };

static unsigned char align7_bits[] U8X8_PROGMEM = {
  0x00, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x1c, 0x00, 0x1c, 0x00, 0x00, 0x00, 0xc0, 0x03, 0xc0, 0x00, 0x40, 0x01, 0x40, 0x02, 0x1c, 0x04, 0x10, 0x08, 0x08, 0x10, 0x08, 0x20, 0x04, 0x00, 0x00, 0x00 };

static unsigned char align8_bits[] U8X8_PROGMEM = {
  0x00, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x1c, 0x00, 0x1c, 0x00, 0x00, 0x00, 0xc0, 0x03, 0xc0, 0x00, 0x40, 0x01, 0x40, 0x02, 0x1c, 0x04, 0x14, 0x08, 0x1c, 0x10, 0x14, 0x20, 0x1c, 0x00, 0x00, 0x00 };

static unsigned char align9_bits[] U8X8_PROGMEM = {
  0x00, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x1c, 0x00, 0x1c, 0x00, 0x00, 0x00, 0xc0, 0x03, 0xc0, 0x00, 0x40, 0x01, 0x40, 0x02, 0x1c, 0x04, 0x14, 0x08, 0x1c, 0x10, 0x10, 0x20, 0x10, 0x00, 0x00, 0x00 };

static unsigned char home_bits[] U8X8_PROGMEM = {
  0x00, 0x02, 0x00, 0x07, 0x80, 0x0f, 0xc0, 0x1f, 0x80, 0x3f, 0x00, 0x7f, 0x00, 0x7e, 0x00, 0x7f, 0x80, 0xfb, 0xc0, 0xc1, 0xe0, 0x01, 0xbc, 0x49, 0x9e, 0x49, 0x9e, 0x79, 0x8c, 0x49, 0x80, 0x49 };

static unsigned char parked_bits[] U8X8_PROGMEM = {
  0x00, 0x00, 0xfe, 0x7f, 0x02, 0x40, 0x02, 0x40, 0xe2, 0x43, 0x62, 0x46, 0x62, 0x46, 0x62, 0x46, 0xe2, 0x43, 0x62, 0x40, 0x62, 0x40, 0x62, 0x40, 0x62, 0x40, 0x02, 0x40, 0xfe, 0x7f, 0x00, 0x00 };

static unsigned char parking_bits[] U8X8_PROGMEM = {
  0xff, 0xff, 0x01, 0x80, 0x01, 0x80, 0xf9, 0x80, 0x99, 0x81, 0x99, 0x81, 0x99, 0x81, 0xf9, 0x80, 0x19, 0x80, 0x99, 0x84, 0x99, 0x8d, 0x99, 0x9f, 0x81, 0x8d, 0x81, 0x84, 0x01, 0x80, 0xff, 0xff };

static unsigned char parkingFailed_bits[] U8X8_PROGMEM = {
  0xff, 0xff, 0x01, 0x80, 0x01, 0x80, 0xf9, 0x90, 0x99, 0x91, 0x99, 0x91, 0x99, 0x91, 0xf9, 0x90, 0x19, 0x90, 0xd9, 0x93, 0x59, 0x90, 0xd9, 0x91, 0x41, 0x80, 0x41, 0x90, 0x01, 0x80, 0xff, 0xff };

static unsigned char guiding_bits[] U8X8_PROGMEM = {
  0x00, 0x00, 0x80, 0x01, 0x80, 0x01, 0xc0, 0x03, 0x20, 0x04, 0x10, 0x08, 0x08, 0x10, 0x8e, 0x71, 0x8e, 0x71, 0x08, 0x10, 0x10, 0x08, 0x20, 0x04, 0xc0, 0x03, 0x80, 0x01, 0x80, 0x01, 0x00, 0x00 };

static unsigned char no_tracking_bits[] U8X8_PROGMEM = {
  0x00, 0x00, 0x00, 0x00, 0x38, 0x1c, 0x7c, 0x3e, 0x7c, 0x3e, 0x7c, 0x3e, 0x7c, 0x3e, 0x7c, 0x3e, 0x7c, 0x3e, 0x7c, 0x3e, 0x7c, 0x3e, 0x7c, 0x3e, 0x7c, 0x3e, 0x7c, 0x3e, 0x38, 0x1c, 0x00, 0x00 };

static unsigned char tracking_sid_bits[] U8X8_PROGMEM = {
  0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x06, 0x00, 0x0E, 0x00, 0x1E, 0x00, 0x3E, 0x00, 0x7E, 0x08, 0xFE, 0x08, 0x7E, 0x7F, 0x3E, 0x3E, 0x1E, 0x1C, 0x0E, 0x3E, 0x06, 0x22, 0x02, 0x00, 0x00, 0x00 };

static unsigned char tracking_sid_r_bits[] U8X8_PROGMEM = {
  0x00, 0x00, 0x80, 0x03, 0x82, 0x04, 0x86, 0x03, 0x8e, 0x04, 0x9e, 0x04, 0x3e, 0x00, 0x7e, 0x08, 0xfe, 0x08, 0x7e, 0x7f, 0x3e, 0x3e, 0x1e, 0x1c, 0x0e, 0x3e, 0x06, 0x22, 0x02, 0x00, 0x00, 0x00 };

static unsigned char tracking_sid_rd_bits[] U8X8_PROGMEM = {
  0x00, 0x00, 0x80, 0x33, 0x82, 0x54, 0x86, 0x53, 0x8e, 0x54, 0x9e, 0x34, 0x3e, 0x00, 0x7e, 0x08, 0xfe, 0x08, 0x7e, 0x7f, 0x3e, 0x3e, 0x1e, 0x1c, 0x0e, 0x3e, 0x06, 0x22, 0x02, 0x00, 0x00, 0x00 };
 
static unsigned char tracking_sid_f_bits[] U8X8_PROGMEM = {
  0x00, 0x00, 0x80, 0x03, 0x82, 0x00, 0x86, 0x03, 0x8e, 0x00, 0x9e, 0x00, 0x3e, 0x00, 0x7e, 0x08, 0xfe, 0x08, 0x7e, 0x7f, 0x3e, 0x3e, 0x1e, 0x1c, 0x0e, 0x3e, 0x06, 0x22, 0x02, 0x00, 0x00, 0x00 };
 
static unsigned char tracking_sid_fd_bits[] U8X8_PROGMEM = {
  0x00, 0x00, 0x80, 0x33, 0x82, 0x50, 0x86, 0x53, 0x8e, 0x50, 0x9e, 0x30, 0x3e, 0x00, 0x7e, 0x08, 0xfe, 0x08, 0x7e, 0x7f, 0x3e, 0x3e, 0x1e, 0x1c, 0x0e, 0x3e, 0x06, 0x22, 0x02, 0x00, 0x00, 0x00 };

static unsigned char tracking_lun_bits[] U8X8_PROGMEM = {
  0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x06, 0x00, 0x0E, 0x00, 0x1E, 0x00, 0x3E, 0x00, 0x7E, 0x38, 0xFE, 0x1C, 0x7E, 0x06, 0x3E, 0x06, 0x1E, 0x06, 0x0E, 0x06, 0x06, 0x1C, 0x02, 0x38, 0x00, 0x00 };  

static unsigned char tracking_sol_bits[] U8X8_PROGMEM = {
  0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x06, 0x00, 0x0E, 0x00, 0x1E, 0x00, 0x3E, 0x00, 0x7E, 0x00, 0xFE, 0x1C, 0x7E, 0x22, 0x3E, 0x41, 0x1E, 0x49, 0x0E, 0x41, 0x06, 0x22, 0x02, 0x1C, 0x00, 0x00 };

static unsigned char tracking_kng_bits[] U8X8_PROGMEM = {
  0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x06, 0x00, 0x0e, 0x00, 0x1e, 0x00, 0x3e, 0x00, 0x7e, 0x00, 0xfe, 0x24, 0x7e, 0x24, 0x3e, 0x14, 0x1e, 0x0c, 0x0e, 0x14, 0x06, 0x24, 0x02, 0x44, 0x00, 0x00 };

static unsigned char slewing_bits[] U8X8_PROGMEM = {
  0x00, 0x00, 0x00, 0x00, 0x02, 0x01, 0x06, 0x03, 0x0e, 0x07, 0x1e, 0x0f, 0x3e, 0x1f, 0x7e, 0x3f, 0xfe, 0x7f, 0x7e, 0x3f, 0x3e, 0x1f, 0x1e, 0x0f, 0x0e, 0x07, 0x06, 0x03, 0x02, 0x01, 0x00, 0x00 };
  
static unsigned char pec_play_bits[] U8X8_PROGMEM = {
  0x00, 0x00, 0x80, 0x07, 0x80, 0x08, 0x80, 0x08, 0x80, 0x08, 0x80, 0x08, 0x80, 0x07, 0x80, 0x00, 0x80, 0x00, 0x80, 0x00, 0x80, 0x00, 0xb8, 0x40, 0x44, 0xa2, 0x83, 0x9d, 0x00, 0x00, 0x00, 0x00 };

static unsigned char pec_record_bits[] U8X8_PROGMEM = {
  0x00, 0x00, 0x80, 0x07, 0x80, 0x08, 0x80, 0x08, 0x80, 0x08, 0x80, 0x08, 0x80, 0x07, 0x80, 0x00, 0x90, 0x04, 0xa0, 0x02, 0xc0, 0x01, 0xb8, 0x40, 0x44, 0xa2, 0x83, 0x9d, 0x00, 0x00, 0x00, 0x00 };

static unsigned char pec_wait_bits[] U8X8_PROGMEM = {
  0x00, 0x00, 0x80, 0x07, 0x80, 0x08, 0x80, 0x08, 0x80, 0x08, 0x98, 0x68, 0x98, 0x67, 0x80, 0x00, 0x80, 0x00, 0x80, 0x00, 0x80, 0x00, 0xb8, 0x40, 0x44, 0xa2, 0x83, 0x9d, 0x00, 0x00, 0x00, 0x00 };

static unsigned char W_bits[] U8X8_PROGMEM = {
  0x00, 0x00, 0x00, 0x00, 0xe0, 0x03, 0x10, 0x04, 0x08, 0x08, 0x24, 0x12, 0x22, 0x22, 0x22, 0x22, 0xa2, 0x22, 0xa2, 0x22, 0x42, 0x21, 0x44, 0x11, 0x08, 0x08, 0x10, 0x04, 0xe0, 0x03, 0x00, 0x00 };

static unsigned char E_bits[] U8X8_PROGMEM = {
  0x00, 0x00, 0x00, 0x00, 0xe0, 0x03, 0x10, 0x04, 0x08, 0x08, 0xe4, 0x13, 0x22, 0x20, 0x22, 0x20, 0xe2, 0x21, 0x22, 0x20, 0x22, 0x20, 0xe4, 0x13, 0x08, 0x08, 0x10, 0x04, 0xe0, 0x03, 0x00, 0x00 };

static unsigned char ErrMf_bits[] U8X8_PROGMEM = {
  0xff, 0xff, 0x00, 0x80, 0x0e, 0xb0, 0x02, 0xb0, 0x66, 0xb3, 0x22, 0xb1, 0x2e, 0xb1, 0x00, 0xb0, 0x22, 0xb0, 0x36, 0xb0, 0xaa, 0xb3, 0xa2, 0xb0, 0xa2, 0x81, 0xa2, 0xb0, 0xa2, 0xb0, 0x00, 0x80 };

static unsigned char ErrAlt_bits[] U8X8_PROGMEM = {
  0xff, 0xff, 0x00, 0x80, 0x0e, 0xb0, 0x02, 0xb0, 0x66, 0xb3, 0x22, 0xb1, 0x2e, 0xb1, 0x00, 0xb0, 0x1e, 0xb0, 0x06, 0xb0, 0x4a, 0xb0, 0x90, 0xb4, 0x20, 0x85, 0x00, 0xb6, 0x00, 0xb7, 0x00, 0x80 };

static unsigned char ErrLs_bits[] U8X8_PROGMEM = {
  0xff, 0xff, 0x00, 0x80, 0x0e, 0xb0, 0x02, 0xb0, 0x66, 0xb3, 0x22, 0xb1, 0x2e, 0xb1, 0x00, 0xb0, 0x00, 0xb2, 0x40, 0xb2, 0x80, 0xb2, 0xfe, 0xb3, 0x80, 0x82, 0x40, 0xb2, 0x00, 0xb2, 0x00, 0x80 };

static unsigned char ErrDe_bits[] U8X8_PROGMEM = {
  0xff, 0xff, 0x00, 0x80, 0x0e, 0xb0, 0x02, 0xb0, 0x66, 0xb3, 0x22, 0xb1, 0x2e, 0xb1, 0x00, 0xb0, 0x1e, 0xb0, 0x22, 0xb0, 0xa2, 0xb3, 0xa2, 0xb2, 0xa2, 0x83, 0xa2, 0xb0, 0x9e, 0xb3, 0x00, 0x80 };

static unsigned char ErrAz_bits[] U8X8_PROGMEM = {
  0xff, 0xff, 0x00, 0x80, 0x0e, 0xb0, 0x02, 0xb0, 0x66, 0xb3, 0x22, 0xb1, 0x2e, 0xb1, 0x00, 0xb0, 0x08, 0xb0, 0x14, 0xb0, 0xa2, 0xb3, 0x22, 0xb2, 0x3e, 0x81, 0xa2, 0xb0, 0xa2, 0xb3, 0x00, 0x80 };

static unsigned char ErrUp_bits[] U8X8_PROGMEM = {
  0xff, 0xff, 0x00, 0x80, 0x0e, 0xb0, 0x02, 0xb0, 0x66, 0xb3, 0x22, 0xb1, 0x2e, 0xb1, 0x00, 0xb0, 0x22, 0xb0, 0x22, 0xb0, 0xa2, 0xb3, 0xa2, 0xb2, 0xa2, 0x83, 0xa2, 0xb0, 0x9c, 0xb0, 0x00, 0x80 };

static unsigned char ErrMe_bits[] U8X8_PROGMEM = {
  0xff, 0xff, 0x00, 0x80, 0x0e, 0xb0, 0x02, 0xb0, 0x66, 0xb3, 0x22, 0xb1, 0x2e, 0xb1, 0x00, 0xb0, 0x22, 0xb0, 0x36, 0xb0, 0xaa, 0xb3, 0xa2, 0xb2, 0xa2, 0x83, 0xa2, 0xb0, 0xa2, 0xb3, 0x00, 0x80 };

static unsigned char ErrOth_bits[] U8X8_PROGMEM = {
  0xff, 0xff, 0x00, 0x80, 0x0e, 0xb0, 0x02, 0xb0, 0x66, 0xb3, 0x22, 0xb1, 0x2e, 0xb1, 0x00, 0xb0, 0xe0, 0xb0, 0x10, 0xb1, 0x00, 0xb1, 0x80, 0xb0, 0x40, 0x80, 0x00, 0xb0, 0x40, 0xb0, 0x00, 0x80 };


//@WTH###################################################################
//Neue Icons f�r VSK Funktionen
static unsigned char ErrGPS_bits[] = {
 0xff,0xff,0x00,0x80,0x0e,0xb0,0x02,0xb0,0x66,0xb3,0x22,0xb1,
 0x2e,0xb1,0x00,0xb0,0x00,0xb0,0x70,0xb0,0xa8,0xb0,0x64,0xb1,
 0x24,0x81,0x04,0xb1,0x88,0xb0,0x70,0x80 };

static unsigned char ErrWeather_bits[] = {
0xff,0xff,0x00,0x80,0x0e,0xb0,0x02,0xb0,0x66,0xb3,0x22,0xb1,
0x2e,0xb1,0x00,0xb0,0x00,0xb0,0xe0,0xb0,0x1c,0xb1,0x12,0xb2,
0x02,0x81,0xfc,0xb0,0xa8,0xb0,0x54,0x80 };

//neue Icons f�r GPS und WiFi
static unsigned char wifi_bits[] U8X8_PROGMEM = {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x80, 0x20, 0x40, 0x4e, 0x00, 0x11,
  0x00, 0x04, 0x00, 0x04, 0x00, 0x04, 0xfe, 0x7f, 0x02, 0x40, 0xda, 0x5f,
  0xda, 0x5f, 0x02, 0x40, 0xfe, 0x7f, 0x00, 0x00 };

static unsigned char wifi_not_connected_bits[] U8X8_PROGMEM = {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x04, 0x00, 0x04, 0x00, 0x04, 0xfe, 0x7f, 0x02, 0x40, 0x02, 0x40,
  0x02, 0x40, 0x02, 0x40, 0xfe, 0x7f, 0x00, 0x00 };

static unsigned char Lock___bits[] U8X8_PROGMEM = {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1e, 0x00, 0x21,
  0x00, 0x21, 0x80, 0x7f, 0x80, 0x7f, 0x80, 0x7f, 0x80, 0x7f, 0x80, 0x7f,
  0x80, 0x7f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };

static unsigned char Lock_F_bits[] U8X8_PROGMEM = {
  0x00, 0x00, 0x3e, 0x00, 0x02, 0x00, 0x02, 0x00, 0x1e, 0x00, 0x02, 0x00,
  0x02, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };

static unsigned char Lock_T_bits[] U8X8_PROGMEM = {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3e, 0x00, 0x08, 0x00, 0x08, 0x00,
  0x08, 0x00, 0x08, 0x00, 0x08, 0x00, 0x00, 0x00 };

static unsigned char GNSS_bits[] U8X8_PROGMEM = {
  0x00, 0x00, 0x40, 0x00, 0xa0, 0x00, 0x10, 0x01, 0x08, 0x01, 0x10, 0x07,
  0xe0, 0x07, 0x80, 0x1f, 0x80, 0x23, 0x2a, 0x42, 0x4a, 0x22, 0x12, 0x14,
  0x64, 0x08, 0x08, 0x00, 0x70, 0x00, 0x00, 0x00 };

static unsigned char Spiral_bits[] U8X8_PROGMEM = {
   0x00, 0x00, 0xfc, 0x3f, 0xfe, 0x7f, 0x06, 0x60, 0x06, 0x60, 0xc6, 0x63,
   0xe6, 0x67, 0x66, 0x66, 0x66, 0x66, 0x06, 0x66, 0x06, 0x66, 0xfe, 0x67,
   0xfc, 0x63, 0x00, 0x60, 0x00, 0x60, 0x00, 0x00 };

//Akkusymbole
static unsigned char AK000_bits[] U8X8_PROGMEM = {
   0xe0, 0x07, 0xe0, 0x07, 0xf8, 0x1f, 0x08, 0xd0,
   0x08, 0xd0, 0x08, 0xd0, 0x08, 0xd0, 0x08, 0xd0,
   0x08, 0xd0, 0x08, 0xd0, 0x08, 0xd0, 0x08, 0xd0,
   0x08, 0x10, 0x08, 0xd0, 0xf8, 0xdf, 0xf8, 0x1f };

static unsigned char AK025_bits[] U8X8_PROGMEM = {
   0xe0, 0x07, 0xe0, 0x07, 0xf8, 0x1f, 0x08, 0x10,
   0x08, 0x10, 0x08, 0x10, 0x08, 0x10, 0x08, 0x10,
   0x08, 0x10, 0x08, 0x10, 0x08, 0x10, 0xf8, 0x1f,
   0xf8, 0x1f, 0xf8, 0x1f, 0xf8, 0x1f, 0xf8, 0x1f };

static unsigned char AK050_bits[] U8X8_PROGMEM = {
   0xe0, 0x07, 0xe0, 0x07, 0xf8, 0x1f, 0x08, 0x10,
   0x08, 0x10, 0x08, 0x10, 0x08, 0x10, 0x08, 0x10,
   0xf8, 0x1f, 0xf8, 0x1f, 0xf8, 0x1f, 0xf8, 0x1f,
   0xf8, 0x1f, 0xf8, 0x1f, 0xf8, 0x1f, 0xf8, 0x1f };

static unsigned char AK075_bits[] U8X8_PROGMEM = {
   0xe0, 0x07, 0xe0, 0x07, 0xf8, 0x1f, 0x08, 0x10,
   0x08, 0x10, 0xf8, 0x1f, 0xf8, 0x1f, 0xf8, 0x1f,
   0xf8, 0x1f, 0xf8, 0x1f, 0xf8, 0x1f, 0xf8, 0x1f,
   0xf8, 0x1f, 0xf8, 0x1f, 0xf8, 0x1f, 0xf8, 0x1f };

static unsigned char AK100_bits[] U8X8_PROGMEM = {
   0xe0, 0x07, 0xe0, 0x07, 0xf8, 0x1f, 0xf8, 0x1f,
   0xf8, 0x1f, 0xf8, 0x1f, 0xf8, 0x1f, 0xf8, 0x1f,
   0xf8, 0x1f, 0xf8, 0x1f, 0xf8, 0x1f, 0xf8, 0x1f,
   0xf8, 0x1f, 0xf8, 0x1f, 0xf8, 0x1f, 0xf8, 0x1f };

//Neue Icons Ende
//########################################################################








//@WTH####################################################################
//neues VSK Bootlogo
static const unsigned char onstep_logo_bits[] U8X8_PROGMEM = {
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0xf8,0x03,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0c,0x0c,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x06,0x18,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x1b,0x10,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x40,0x29,0xf0,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x60,0x01,0xf0,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x78,0x01,0xf0,0x03,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7c,0x03,0xd0,
 0x07,0xe0,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0xfc,0x06,0xe8,0x0f,0xf0,0xc7,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x18,0x00,0x00,0xfe,0x0d,0xec,0x1f,0x38,0xce,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x18,0x00,0x00,0xff,0xfb,0xef,
 0x3f,0x18,0xec,0xc3,0x61,0xb3,0x63,0x8c,0xf1,0xb0,0x7d,0x1c,
 0x00,0xff,0x0b,0xf6,0x3f,0x78,0xe0,0xe3,0xe3,0xf3,0x67,0x8c,
 0xf9,0xf3,0x7d,0x3e,0x80,0xff,0xf7,0xf7,0x7f,0xf0,0xc3,0x30,
 0xe6,0x30,0xe6,0xcc,0x19,0x73,0x18,0x63,0x80,0xff,0xf7,0xfb,
 0x7f,0xc0,0xcf,0x30,0x66,0x30,0xc6,0xde,0x00,0x33,0x18,0x63,
 0x80,0xff,0xf7,0xfb,0x7f,0x00,0xce,0xf0,0x67,0x30,0xc6,0xde,
 0xf0,0x33,0x18,0x7f,0xc0,0xff,0x07,0xf8,0x7f,0x18,0xcc,0x30,
 0x60,0x30,0xc6,0xff,0x18,0x33,0x18,0x03,0xc0,0xff,0xff,0xff,
 0xff,0x38,0xce,0x30,0x66,0x30,0x86,0x73,0x0c,0x33,0x18,0x63,
 0xc0,0xff,0xff,0xff,0xff,0xf0,0xc7,0xf3,0x67,0x30,0x86,0x73,
 0xfc,0x33,0x78,0x7f,0xc0,0xff,0xff,0xff,0xff,0xe0,0x83,0xe3,
 0x63,0x30,0x86,0x73,0x78,0x33,0x70,0x3e,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0xfc,0xff,0xff,0xff,0xff,0x0f,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0xfc,0xff,0xff,0xff,0xff,0x0f,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xfc,0xff,0xff,0xff,
 0xff,0x0f,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0xfc,0xff,0xff,0xff,0xff,0x0f,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0xe0,0xff,0xff,0xff,0xff,0x01,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xf0,0xff,0xff,0xff,
 0xff,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0xf0,0xff,0xff,0xff,0xff,0x31,0x9c,0x01,0x00,0x30,0xc0,0x00,
 0x00,0x06,0x00,0x00,0xf0,0xff,0xff,0xff,0xff,0x31,0x8e,0x01,
 0x00,0x30,0xc0,0x00,0x00,0x06,0x00,0x00,0xf0,0xff,0xff,0xff,
 0xff,0x31,0x07,0x00,0x00,0x30,0xc0,0x00,0x00,0x00,0x00,0x00,
 0xf0,0xff,0xff,0xff,0xff,0xb1,0x83,0xb1,0xf1,0xb0,0xc3,0x0e,
 0x3e,0x46,0xe7,0x00,0xf0,0xff,0xff,0xff,0xff,0xf1,0x81,0xf1,
 0x99,0x71,0xc7,0x1d,0x63,0xc6,0xbd,0x03,0xf0,0xff,0xff,0xff,
 0xff,0xf1,0x83,0x31,0x0c,0x31,0xc6,0x18,0x63,0xc6,0x18,0x03,
 0xf0,0xff,0xff,0xff,0xff,0x71,0x87,0x31,0x0c,0x30,0xc6,0x18,
 0x7f,0xc6,0x18,0x03,0xf0,0x07,0xfe,0xff,0xff,0x31,0x86,0x31,
 0x0c,0x30,0xc6,0x18,0x7f,0xc6,0x18,0x03,0xf0,0x07,0xfe,0xff,
 0xff,0x31,0x8e,0x31,0x0c,0x31,0xc6,0x18,0x03,0xc6,0x18,0x03,
 0xf0,0x07,0xfe,0xff,0xff,0x31,0x9c,0x31,0x98,0x31,0xc6,0x18,
 0x63,0xc6,0x18,0x03,0xf0,0x07,0xfe,0xff,0xff,0x31,0x98,0x31,
 0xf0,0x30,0xc6,0x18,0x3e,0xc6,0x18,0x03,0xf0,0x07,0xfe,0xff,
 0xff,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0xf0,0x07,0xfe,0xff,0xff,0x01,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0xf0,0x07,0xfe,0xff,0xff,0x01,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xf0,0x07,0xfe,0xff,
 0xff,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0xf0,0x07,0xfe,0xff,0xff,0x01,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0xf0,0x07,0xfe,0xff,0xff,0x01,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xf0,0x07,0xfe,0xff,
 0xff,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0xf0,0x07,0xfe,0xff,0xff,0x01,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00 };
//VSK Bootlogo Ende
//########################################################################