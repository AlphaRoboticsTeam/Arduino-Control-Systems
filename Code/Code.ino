#include "ControllerFunction.h"

PController p(20, 0.5);
PDController pd(20, 0.5, 0.2);
PIController pi(20, 0.5, 0.3);
PIDController pid(20, 0.5, 0.2, 0.3);
void setup() {
  // put your setup code here, to run once:
}

void loop() {
  // put your main code here, to run repeatedly:
}
