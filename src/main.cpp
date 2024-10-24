#include <Arduino.h>
#include <Wire.h>
#include <LiquidCrystal.h>

const int rs = 12, en = 11, d4 = 4, d5 = 5, d6 = 6, d7 = 7;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

// put function declarations here:
int myFunction(int, int);

void setup()
{
  // put your setup code here, to run once:
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  // Print a message to the LCD.
  lcd.setCursor(0, 0);
  lcd.print("hello, world!");
}

void loop()
{
  // put your main code here, to run repeatedly:
  delay(1000);
  lcd.setCursor(0, 0);
  lcd.print("hello, world!");
}

// put function definitions here:
int myFunction(int x, int y)
{
  return x + y;
}