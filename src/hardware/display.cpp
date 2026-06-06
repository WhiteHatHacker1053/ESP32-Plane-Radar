#include "hardware/display.h"

#include "hardware/display_font.h"
#include <GxEPD2_BW.h>
#include <GxEPD2_display_selection_new_style.h>

// WeAct 2.9" e-ink display: 128x296, black/white
GxEPD2_BW<GxEPD2_290_GDEY029T94, GxEPD2_290_GDEY029T94::HEIGHT> display(
    GxEPD2_290_GDEY029T94(
        /*CS=*/ GPIO_NUM_5,
        /*DC=*/ GPIO_NUM_33,
        /*RST=*/ GPIO_NUM_19,
        /*BUSY=*/ GPIO_NUM_26));

void displayInit() {
  display.init(115200, true, 2, false);
  display.setRotation(0);
  display.setTextWrap(false);
  displayFontInit();
}
