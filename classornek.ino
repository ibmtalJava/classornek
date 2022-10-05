#include "FanMotor.h"
FanMotor fan(8,A4);
void setup() {
  fan.setup();
}
void loop(){
  fan.attach();
}
