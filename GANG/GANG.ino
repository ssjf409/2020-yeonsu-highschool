#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd1(0x27, 16, 2);

//한
byte han[8] = {
  B01000,
  B11100,
  B00010,
  B11010,
  B11011,
  B00010,
  B10000,
  B11111
};

//국
byte gug[8] = {
  B11111,
  B00001,
  B00010,
  B11111,
  B00100,
  B11111,
  B00001,
  B00010
};

//다
byte da[8] = {
  B00010,
  B11010,
  B10010,
  B10011,
  B10010,
  B11110,
  B00010,
  B00010
};

//람
byte lam[8] = {
  B11010,
  B01010,
  B11011,
  B10010,
  B11110,
  B00010,
  B01111,
  B01111
};

//쥐
byte jwi[8] = {
  B11101,
  B01001,
  B10101,
  B00001,
  B11111,
  B01001,
  B01001,
  B10001
};

// ♡
byte heart[8] = {
  B00000,
  B01010,
  B10101,
  B10001,
  B10001,
  B01010,
  B00100,
  B00000
};


void setup()
{
  lcd1.begin();
  lcd1.backlight();
  lcd1.createChar(0, han);
  lcd1.createChar(1, gug);
  lcd1.createChar(2, da);
  lcd1.createChar(3, lam);
  lcd1.createChar(4, jwi);
  lcd1.createChar(5, heart);
}

void loop(){
  lcd1.print("Korean Squirrel");
  lcd1.setCursor(0, 1);
  lcd1.write(5);
  lcd1.print(" ");
  lcd1.write(5);
  lcd1.print(" ");
  lcd1.write(5);
  lcd1.print(" ");
  lcd1.write(5);
  lcd1.print(" ");
  lcd1.write(5);
  lcd1.print(" ");
  lcd1.write(5);
  lcd1.print(" ");
  lcd1.write(5);
  lcd1.print(" ");
  lcd1.write(5);
  lcd1.print(" ");
  
  delay(1000);
  lcd1.clear();

  lcd1.write(0); // 한
  lcd1.print(" ");
  lcd1.write(1); // 국
  lcd1.print(" ");
  lcd1.write(2); // 다
  lcd1.print(" ");
  lcd1.write(3); // 람
  lcd1.print(" ");
  lcd1.write(4); // 쥐
  lcd1.setCursor(0, 1);
  lcd1.print(" ");
  lcd1.write(5);
  lcd1.print(" ");
  lcd1.write(5);
  lcd1.print(" ");
  lcd1.write(5);
  lcd1.print(" ");
  lcd1.write(5);
  lcd1.print(" ");
  lcd1.write(5);
  lcd1.print(" ");
  lcd1.write(5);
  lcd1.print(" ");
  lcd1.write(5);
  lcd1.print(" ");
  lcd1.write(5);
  delay(1000);
  lcd1.clear();
}
