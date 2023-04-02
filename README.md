# lcd12864-spi-arduino
Lcd12864 SPI interface to Arduino

materials:

Lcd12864 (STR7565), arduino nano, shield/breadboard, jumper cable, psu 5 - 9V.

UNCOMMENT > U8G2_ST7565_ERC12864_F_4W_SW_SPI u8g2(U8G2_R0, /* clock=*/ 13, /* data=*/ 11, /* cs=*/ 10, /* dc=*/ 9, /* reset=*/ 8);

| LCD    | Micro Controller |
| ------ | ---------------- |
| CS     | CS               |
| RSE    | RESET            |
| RS     | DC               |
| SCL    | CLOCK            |
| SI     | DATA             |
| VDD    | 3.3V             |
| VSS    | GND              |
| A      | 3.3V             |
| K      | GND              |

References:

1. http://www.jogjarobotika.com/lcd/5656-lcd-12864-12864-06d-dot-matrix-cog-screen-moudule-spi-st7565-hitam.html

2. https://www.circuitsonline.net/forum/view/159352

3. https://forum.arduino.cc/t/st7920-graphical-lcd-not-working/1083567/9
