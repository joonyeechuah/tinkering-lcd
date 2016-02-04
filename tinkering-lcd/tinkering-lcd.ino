// Hook everything up like in the diagram.
// To attach the LCD screen to the bread board, you
// might have to get Mr. Applegate to solder on a header
// (he should know how to do this.)
// (Without setting his beard on fire.)
// (Note: ask him why he has no hair.)
// The potentiometer controls the contrast of the LCD screen!

#include "LiquidCrystal.h"

char sentence1[]=" SUNFOUNDER               ";  
char sentence2[]="hello, world!             ";  

// The pins matter a whole lot! Check the diagram!
LiquidCrystal lcd(4, 6, 10, 11, 12, 13);

void setup()
{
  lcd.begin(16, 2);  // set up the LCD's number of columns and rows:
}

void loop()
{
    lcd.setCursor(0,0);  // set the cursor to column 15, line 0
    printSentence(sentence1);
    delay(2000);
    lcd.clear();  //Clears the LCD screen and positions the cursor in the upper-left corner.
    lcd.setCursor(0,1);  // set the cursor to column 15, line 1
    printSentence(sentence2);
    lcd.clear();  //Clears the LCD screen and positions the cursor in the upper-left corner.
    delay(2000);
}

void printSentence(char *sentence) {
  for (int i = 0; i < strlen(sentence); i++) {
    lcd.print(sentence[i]);
  }
}

