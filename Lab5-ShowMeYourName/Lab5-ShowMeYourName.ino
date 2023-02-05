#include <TFT_eSPI.h> 

TFT_eSPI tft = TFT_eSPI(); 

void setup(void) {
    tft.init();
    tft.setRotation(1); //0-3 start at startbutton on the bottom on screen to 3 button
}

void loop() {
    tft.fillScreen(0x0000);
    tft.setTextColor(0xffff,0x0000); //rgb565 (16bit)
    tft.drawRightString("---------------------------------", 0, 0, 1);
    tft.drawRightString("COMCAMP#34", 0 , 16, 4);
    tft.drawRightString("PANURUT SIRINAPAISAN", 20, 36, 2);
    tft.drawRightString("---------------------------------", 0, 55, 1);
    delay(5000);
}