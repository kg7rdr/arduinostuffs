
#include "U8glib.h"
U8GLIB_ST7920_128X64 u8g(6, 3, 5, U8G_PIN_NONE); // SPI Com: SCK = en = 18, MOSI = rw = 16, CS = di = 17

// Init the Pins used for PWM
const int redPin = 9;
const int greenPin = 10;
const int bluePin = 11;

// Init the Pins used for 10K pots
const int redPotPin = 0;
const int greenPotPin = 1;
const int bluePotPin = 2;

// Init our Vars
int currentColorValueRed;
int currentColorValueGreen;
int currentColorValueBlue;



void setup()
{
  Serial.begin(9600);
  
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
}

void loop()
{
// Read the voltage on each analog pin then scale down to 0-255 and inverting the value for common anode
  currentColorValueRed = (255 - map( analogRead(redPotPin), 0, 1024, 0, 255 ) ); 
  currentColorValueBlue = (255 - map( analogRead(bluePotPin), 0, 1024, 0, 255 ) );
  currentColorValueGreen = (255 - map( analogRead(greenPotPin), 0, 1024, 0, 255 ) );

// Write the color to each pin using PWM and the value gathered above
  analogWrite(redPin, currentColorValueRed);
  analogWrite(bluePin, currentColorValueBlue);
  analogWrite(greenPin, currentColorValueGreen);
  
  Serial.print("RGB");
  Serial.print(" - ");
  Serial.print(currentColorValueRed);
  Serial.print(" - ");
  Serial.print(currentColorValueGreen);
  Serial.print(" - ");
  Serial.println(currentColorValueBlue);
  u8g.firstPage();  
  do {
    draw();
  } while( u8g.nextPage() );
}
void draw(void) {
  // graphic commands to redraw the complete screen should be placed here  
  u8g.setFont(u8g_font_7x14);
  // call procedure from base class, http://arduino.cc/en/Serial/Print
  u8g.setPrintPos(10, 12); 
  u8g.print("Red");
   u8g.setPrintPos(60, 12); 
  u8g.print(analogRead(currentColorValueRed));
   u8g.setPrintPos(10, 32); 
   u8g.print("Green");
    u8g.setPrintPos(60, 32); 
  u8g.print(analogRead(currentColorValueGreen));
   u8g.setPrintPos(10, 52); 
   u8g.print("Blue");
    u8g.setPrintPos(60, 52); 
  u8g.print(analogRead(currentColorValueBlue));
}
