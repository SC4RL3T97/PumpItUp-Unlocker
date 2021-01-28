/*
Pump it up XX - Brain Power Unlocker compact version
by SC4RL3T
Mortor controller unit

[NOTICE]
Unexpected errors and breakdowns may occur due to the use of
this source code and the direct connection of equipment to Pump It Up,
and all responsibility lies with the user.

[주의사항]
이 소스코드의 사용과 Pump it up 기체에 직접적인 장비 연결에 대한 손상, 오류 등을 초례할 수 있습니다.
이에 대한 피해 보상은 그 누구도 해주지 않으며, 모든 책임은 사용자 본인에게 있습니다.
*/

#include <Stepper.h>

const int Step = 2048; 
Stepper StepMortor(Step, 11, 9, 10, 8); //스텝모터 

void setup() {
  StepMortor.setSpeed(16); //모터의 속도를 조절하려면 숫자 값을 조절하세요. 
}

void loop() {
  StepMortor.step(Step);
  delay(50);
}
