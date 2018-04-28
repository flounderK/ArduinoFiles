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
  Keyboard.println("printf 'allow-hotplug wlan0\nauto wlan0\niface wlan0 inet dhcp\nwpa-ssid \"ssid\"\nwpa-psk \"password\"\n' >> /etc/network/interfaces \n");
  delay(3000);
  Keyboard.println("systemctl reboot\n");
  //Keyboard.println("exit\n");
}

void loop() {
  // put your main code here, to run repeatedly:

}








