#include <Wire.h>
#include <Adafruit_SSD1306.h>
#include <Adafruit_GFX.h>

void printtext(int,int,int,int,char);

Adafruit_SSD1306 display(-1);

void setup() {
  display.begin(SSD1306_SWITCHCAPVCC, 0x3C);
}

void loop(){
    display.clearDisplay();

    /*display.setTextSize(3);
    display.setCursor(0,0);
    display.setTextColor(WHITE);
    display.println("Hello,World!");*/

    printtext(1,x,0,WHITE,"Hello,World!");
    display.display();
    delay(25);
}

void printtext(int size,int x,int y,int color,char text[20]){
    display.setTextColor(color);
    display.setTextSize(size);
    display.setCursor(x,y);
    display.println(text);
}