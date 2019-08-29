#include <IRremote.h>

IRsend irsend;

void setup()
{
}

void morelight(){
    for (int i = 0; i < 3; i++) {
    irsend.sendNEC(0x807FA05F, 32); 
    delay(40);
  }

delay(1000); 

}

void loop() {
 for (int i = 0; i < 3; i++) {
 irsend.sendNEC(0x807F00FF, 32); //  ON/OFF
 delay(40);
 }

delay(2000);

  for (int i = 0; i < 3; i++) {
    irsend.sendNEC(0x807F609F, 32); //  NIGHTMODE
    delay(40);
  }

delay(2500); 

morelight();
morelight();
morelight();
morelight();

}
