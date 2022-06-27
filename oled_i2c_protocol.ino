
#include<Adafruit_SSD1306.h> 
#define RESET LED_BUILTIN
Adafruit_SSD1306 oled(RESET);
void setup()
{
  oled.begin(SSD1306_SWITCHCAPVCC, 0x3C);
  oled.setTextSize(2);
  oled.setTextColor(WHITE);
  oled.display();
  delay(1000);
  oled.clearDisplay();
}
void loop()
{
  oled.clearDisplay();
  oled.setCursor(0, 0);
  oled.print("welcome to ");
  oled.setCursor(35, 30);
  oled.print("DBIT");
  oled.display();
  delay(1000);
  oled.clearDisplay();
  oled.setCursor(0, 0);
  oled.print".....");
  oled.setCursor(30, 30);
  oled.print(".....");
  oled.display();
  delay(1000);
  oled.clearDisplay();
  oled.setCursor(0, 0);
  oled.print("THANKS FOR");
  oled.setCursor(10, 30);
  oled.print("JOINING");
  oled.display();
  delay(1000); 
}
