#include <Keyboard.h>
void setup() {
  // put your setup code here, to run once:

  delay(3000);
  Keyboard.println("sudo -s\n");
  delay(3000);
  Keyboard.println("printf 'allow-hotplug wlan0\nauto wlan0\niface wlan0 inet dhcp\nwpa-ssid \"ssid\"\nwpa-psk \"password\"\n' >> /etc/network/interfaces \n");
  delay(3000);
  Keyboard.println("exit\n");
  //Keyboard.println("systemctl reboot\n");

}

void loop() {
  // put your main code here, to run repeatedly:

}








