# Using the SSD1322 OLED Driver in 8-bit 8080 mode.

This guide will explain how to use the U8x8 library on an Arduino to control the SSD1322 OLED driver via 8-bit 8080 mode.

When researching how to use 8080 mode, I was unable to find any clear guide, and all forums I read suggested re-soldering the resistors to reconfigure the driver. But after some persistance I found a working configuration.

## Pins
You will need to connect the following pins:

| OLED Pin Name | OLED Pin Number | Arduino Pin |
|---|---|---|
| GND   | 1      | GND     |
| VDD   | 2      | 3.3V    |
| -     | 3      | -       |
| D0    | 4      | D2      |
| D1    | 5      | D3      |
| D2    | 6      | D4      |
| D3    | 7      | D5      |
| D4    | 8      | D6      |
| D5    | 9      | D7      |
| D6    | 10     | D8      |
| D7    | 11     | D9      |
| R/D   | 12     | 3.3V    |
| R/W   | 13     | D10     |
| D/C   | 14     | D11     |
| RES   | 15     | D12     |
| CS    | 16     | D13     |

## Using a Breadboard
Some OLEDs have their pins arranged into two rows, meaning experimenting with a breadboard is not easy. 

If you have dupont wires at hand, then you can use these to connect to a breadboard.

Alternatively, I built a small adapter using a prototyping board, some wire and some female pin headers.

## The Result
If everything works correctly, you should see "Hello from U8x8!" displayed.

## Next Steps
[SSD1322 Documentation](https://www.newhavendisplay.com/app_notes/SSD1322.pdf)

[U8x8 Reference](https://github.com/olikraus/u8g2/wiki/u8x8reference#setcursor)

[U8x8 Font List](https://github.com/olikraus/u8g2/wiki/fntlist8x8)