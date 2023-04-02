# lcd12864-spi-arduino
Lcd12864 SPI interface to Arduino

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
