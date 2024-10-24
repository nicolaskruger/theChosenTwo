#include <Arduino.h>
#include <Wire.h>
#include <LiquidCrystal.h>

const int rs = 12, en = 11, d4 = 4, d5 = 5, d6 = 6, d7 = 7;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

const char *ouo = "AAAAAAAAAAAAAAAA";
const char *abc = "a\0";

// put function declarations here:
int myFunction(int, int);

uint8_t bell[8] = {0x4, 0xe, 0xe, 0xe, 0x1f, 0x0, 0x4};
uint8_t note[8] = {0x2, 0x3, 0x2, 0xe, 0x1e, 0xc, 0x0};
uint8_t clock[8] = {0x0, 0xe, 0x15, 0x17, 0x11, 0xe, 0x0};
uint8_t heart[8] = {0x0, 0xa, 0x1f, 0x1f, 0xe, 0x4, 0x0};
uint8_t duck[8] = {0x0, 0xc, 0x1d, 0xf, 0xf, 0x6, 0x0};
uint8_t check[8] = {0x0, 0x1, 0x3, 0x16, 0x1c, 0x8, 0x0};
uint8_t cross[8] = {0x0, 0x1b, 0xe, 0x4, 0xe, 0x1b, 0x0};
uint8_t retarrow[8] = {0x1, 0x1, 0x5, 0x9, 0x1f, 0x8, 0x4};

const byte backLightpin = 5;
// const byte backLightpin = 10;
const byte contrast_pin = 6;

void setup()
{
  delay(1000);
  Serial.begin(9600);
  Serial.println("ola !!!");

  lcd.begin(16, 2);
  // lcd.begin(20, 4);
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.println("if(ehParaninfo) ");
  lcd.setCursor(0, 1);
  lcd.println("  aperteBotao();");
}

char cha = 'a';
// display all keycodes

void displayKeyCodes(void)
{
  delay(1000);
  Serial.print(cha);
  lcd.setCursor(0, 0);
  lcd.print(cha);
  cha = (cha + 1) % 127;
}

void loop()
{
  // displayKeyCodes();
}

// put function definitions here:
int myFunction(int x, int y)
{
  return x + y;
}