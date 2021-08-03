// Import the U8x8 library
#include <U8x8lib.h>

// Create an instance of our display using the defined pins.
//
// +----------------+
// |      OLED      |
// +-------+--------+---------+
// | Name  | Number | Arduino |
// +-------+--------+---------+
// | GND   | 1      | GND     |
// | VDD   | 2      | 3.3V    |
// | -     | 3      | -       |
// | D0    | 4      | D2      |
// | D1    | 5      | D3      |
// | D2    | 6      | D4      |
// | D3    | 7      | D5      |
// | D4    | 8      | D6      |
// | D5    | 9      | D7      |
// | D6    | 10     | D8      |
// | D7    | 11     | D9      |
// | R/D   | 12     | 3.3V    |
// | R/W   | 13     | D10     |
// | D/C   | 14     | D11     |
// | RES   | 15     | D12     |
// | CS    | 16     | D13     |
U8X8_SSD1322_NHD_256X64_8080 u8x8(2, 3, 4, 5, 6, 7, 8, 9, 10, 13, 11, 12);


void setup(void) {
  u8x8.begin();                          // Init display
  u8x8.setFont(u8x8_font_courB24_3x4_f); // Set font (big)

  u8x8.print("Hello from");              // Print first line
  u8x8.setCursor(0, 4);                  // Move to 4th line
  u8x8.print("U8x8!");                   // Print second line
}

void loop(void) {
  delay(1000);                           // Do nothing
                                         // (nothing to update)
}
