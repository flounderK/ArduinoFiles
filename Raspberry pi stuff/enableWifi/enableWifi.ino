#include <Keyboard.h>

//LED blinking code found at https://learn.sparkfun.com/tutorials/pro-micro--fio-v3-hookup-guide/all
int RXLED = 17;
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
  //this will fail.
  //Keyboard.println("systemctl restart networking.service\n");
  //delay(3000);
  Keyboard.println("exit\n");
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(RXLED, LOW);   // set the RX LED ON
  TXLED0; //TX LED is not tied to a normally controlled pin so a macro is needed, turn LED OFF
  delay(1000);              // wait for a second

  digitalWrite(RXLED, HIGH);    // set the RX LED OFF
  TXLED1; //TX LED macro to turn LED ON
  delay(1000);              // wait for a second
}








