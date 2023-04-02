#include <Arduino.h>
#include <U8g2lib.h>

#ifdef U8X8_HAVE_HW_SPI
#include <SPI.h>
#endif
#ifdef U8X8_HAVE_HW_I2C
#include <Wire.h>
#endif

/*
  U8g2lib Example Overview:
    Frame Buffer Examples: clearBuffer/sendBuffer. Fast, but may not work with all Arduino boards because of RAM consumption
    Page Buffer Examples: firstPage/nextPage. Less RAM usage, should work with all Arduino boards.
    U8x8 Text Only Example: No RAM usage, direct communication with display controller. No graphics, 8x8 Text only.

    Source:
    https://www.circuitsonline.net/forum/view/159352
*/

U8G2_ST7565_ERC12864_ALT_F_4W_SW_SPI u8g2(U8G2_R0, /* clock=*/ 13, /* data=*/ 11, /* cs=*/ 10, /* dc=*/ 9, /* reset=*/ 8); // contrast improved version for ERC12864

// End of constructor list


void testContrast(uint8_t contrast)
{
  static char cstr[6];
  static char vstr[4];
  u8g2.setContrast(60);                     //    <= Even vast gezette contrast instelling voor vergelijking van de drie displays, vervang "60" door  "contrast" en de code werkt weer
  strcpy( cstr, u8x8_u8toa(contrast, 3));
  u8g2.firstPage();
  do {
    //u8g2.setFont(u8g2_font_ncenB14_tr);
    u8g2.setFont(u8g2_font_courB24_tn);
    u8g2.drawStr(0,28, cstr);
    u8g2.drawFrame (0, 0, 128, 64);

  } while ( u8g2.nextPage() );
}


void setup(void) {

  u8g2.begin();  
}



void loop(void) {
  uint8_t i;
  i = 255;
  do
  {
    testContrast(255-i);
    delay(200);
    i-=1;
  } while( i != 0 );
  i = 255;
  delay(100);
  do
  {
    testContrast(i);
    delay(200);
    i-=1;
  } while( i != 0 );
  delay(100);
}
