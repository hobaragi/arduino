#include <LiquidCrystal.h>
#include <stdio.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

char S[20] = "Merry Christmas!";

void setup() {
  lcd.begin(16,2);
}

void loop() {
  for (int i=0; i<16; i++) {
    lcd.clear();
    lcd.setCursor(16-i, 0);
    lcd.print("Merry Christmas!");
    delay(200);
  }
  for (int i=0; i<16; i++) {
    lcd.clear();
    for (int j=0; j<16; j++) {
      if ((i+j) >= strlen(S))
        break;
      lcd.setCursor(j,0);
      lcd.print(S[j+i]);
    }
    delay(200);
  }
}
