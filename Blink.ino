
#include <M5StickC.h>
// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin 10 as an output.
  
  pinMode(10, OUTPUT);
  M5.begin();
  
  M5.Lcd.setRotation(3);
  M5.Lcd.setTextSize(1);
  
}

// the loop function runs over and over again forever
void loop() {
  M5.Lcd.fillScreen(BLACK);  
  delay(500);
  M5.Lcd.setCursor(10, 35);
  M5.Lcd.print("HELLO  new WORLD!\n  have a nice day");
  delay(500);
  M5.Lcd.fillRect(10, 25, 4, 4, BLUE);
  delay(500);
  M5.Lcd.fillTriangle(20, 25, 22, 28, 18, 28, RED);
  delay(500);
  M5.Lcd.fillCircle(30, 26, 2, YELLOW);
  delay(1000);
  M5.Lcd.fillCircle(15, 60, 3, WHITE);
  delay(1000);
  M5.Lcd.fillCircle(40, 60, 3, WHITE);
  delay(1000);
  M5.Lcd.fillCircle(65, 60, 3, WHITE);
  delay(1000);
  M5.Lcd.fillCircle(90, 60, 3, WHITE);
  delay(1000);
  M5.Lcd.fillCircle(115, 60, 3, WHITE);
  delay(1000);
  M5.Lcd.fillCircle(140, 60, 3, WHITE);
  delay(1000);
  M5.Lcd.fillScreen(WHITE);
  delay(500);
  digitalWrite(10, HIGH);
  delay(500);
  digitalWrite(10, LOW);
  delay(500);
}
