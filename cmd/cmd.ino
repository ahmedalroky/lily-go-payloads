#include <Keyboard.h>
void setup() {//init
  Keyboard.begin();//Start keyboard communication 
  delay(3000);//Delay
  Keyboard.press(KEY_LEFT_GUI);//win Button
  delay(500);
  Keyboard.release(KEY_LEFT_GUI); //release win button
  delay(500);
  Keyboard.println("cmd"); //write into run prompt
  delay(500); 
  Keyboard.press(KEY_RETURN); //press enter
  delay(50);
  Keyboard.release(KEY_RETURN);
  Keyboard.end();
}
void loop()
{
}
