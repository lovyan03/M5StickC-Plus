#ifndef _M5DISPLAY_H_
#define _M5DISPLAY_H_

#define LGFX_M5STICK_C

#include "utility/Config.h"
#include <SD.h>
#include <SPIFFS.h>
#include <LGFX_TFT_eSPI.h>

class M5Display : public LGFX {

 public:
  M5Display();
  
  void progressBar(int x, int y, int w, int h, uint8_t val);

};
#endif
