#include <Keyboard.h>
void setup() {
  // put your setup code here, to run once:
  for (int i=0;i <= 130; i++){
    delay(1000);
  }
  
  Keyboard.println("pi\n");
  delay(3000);
  Keyboard.println("raspberry\n");
  delay(3000);
  Keyboard.println("sudo -s\n");
  delay(3000);
  //Keyboard.println("raspberry\n");
  delay(3000);
  Keyboard.println("systemctl enable ssh\n");
  delay(3000);
  Keyboard.println("systemctl start ssh\n");
  delay(3000);
  Keyboard.println("exit\n");
}

void loop() {
  // put your main code here, to run repeatedly:

}








