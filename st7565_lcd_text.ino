/* Source: 
 *  http://www.jogjarobotika.com/lcd/5656-lcd-12864-12864-06d-dot-matrix-cog-screen-moudule-spi-st7565-hitam.html
 */  

#include <Arduino.h>
#include <U8g2lib.h>

#ifdef U8X8_HAVE_HW_SPI
#include <SPI.h>
#endif
#ifdef U8X8_HAVE_HW_I2C
#include <Wire.h>
#endif

U8G2_ST7565_ERC12864_F_4W_SW_SPI u8g2(U8G2_R0, /* clock=*/ 13, /* data=*/ 11, /* cs=*/ 10, /* dc=*/ 9, /* reset=*/ 8);

void setup(void) {
u8g2.begin();
}

void loop(void) {

u8g2.clearBuffer(); // clear the internal memory
u8g2.enableUTF8Print();
u8g2.setFont(u8g2_font_6x13B_t_cyrillic);
u8g2.setCursor(4, 22);
u8g2.setContrast (10);
u8g2.print("JOHN ESWIN NIZAR");
u8g2.setFont(u8g2_font_cu12_t_cyrillic);
u8g2.setCursor(4, 42);
u8g2.print("Теxт 123 test");
// write something to the internal memory
u8g2.sendBuffer(); // transfer internal memory to the display
delay(1000);
}
