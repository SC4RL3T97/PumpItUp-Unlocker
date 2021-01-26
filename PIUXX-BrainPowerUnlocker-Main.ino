/*
Pump it up XX - Brain Power Unlocker compact version
by SC4RL3T
Main controller unit

[NOTICE]
Unexpected errors and breakdowns may occur due to the use of
this source code and the direct connection of equipment to Pump It Up,
and all responsibility lies with the user.

[주의사항]
이 소스코드의 사용과 Pump it up 기체에 직접적인 장비 연결에 대한 손상, 오류 등을 초례할 수 있습니다.
이에 대한 피해 보상은 그 누구도 해주지 않으며, 모든 책임은 사용자 본인에게 있습니다.

예상대로 작동되지 않을경우 확인 후 값을 수정해주세요. 
*/

int i = 0;
int oneCenter = 7;
int twoCenter = 6;
int LeftUp = 5;
int LeftDown = 4;
int speaker = 3;
  
void setup() {

  pinMode(oneCenter, OUTPUT);
  pinMode(twoCenter, OUTPUT);
  pinMode(LeftUp, OUTPUT);
  pinMode(LeftDown, OUTPUT);
  pinMode(speaker, OUTPUT);

  digitalWrite(oneCenter, HIGH);
  digitalWrite(twoCenter, HIGH);
  digitalWrite(LeftUp, HIGH);
  digitalWrite(LeftDown, HIGH);

  tone(speaker, 523.2511); //부팅 사운드 
  delay(250);
  tone(speaker, 659.2551);
  delay(250);
  tone(speaker, 698.4565);
  delay(250);
  noTone(speaker);
  
}

void loop() { 

  tone(speaker, 587.3295); //시작 사운드 
  delay(250);
  tone(speaker, 783.9909);
  delay(250);
  noTone(speaker);

  digitalWrite(oneCenter, LOW); //카드입력 전 스타트 입력 
  digitalWrite(twoCenter, LOW);
  delay(75);
  digitalWrite(oneCenter, HIGH);
  digitalWrite(twoCenter, HIGH);

  delay(14000); //카드입력 대기 

  digitalWrite(oneCenter, LOW); //엔트리 
  delay(75);
  digitalWrite(oneCenter, HIGH);
  delay(75);
  digitalWrite(twoCenter, LOW);
  delay(75);
  digitalWrite(twoCenter, HIGH);

  delay(13000); //셀렉트 뮤직 대기 
  
  digitalWrite(LeftUp, LOW); //카테고리 나가기 
  delay(75);
  digitalWrite(LeftUp, HIGH);

  delay(500);
  digitalWrite(LeftDown, LOW); //왼쪽 1칸 이동 
  delay(75);
  digitalWrite(LeftDown, HIGH);

  delay(250);
  digitalWrite(oneCenter, LOW); //UCS 카테고리 선택 
  delay(75);
  digitalWrite(oneCenter, HIGH);

  delay(250);
  digitalWrite(oneCenter, LOW); //UCS 선택완료 
  delay(75);
  digitalWrite(oneCenter, HIGH);
  delay(250);
  digitalWrite(twoCenter, LOW);
  delay(75);
  digitalWrite(twoCenter, HIGH);
  delay(250);
  digitalWrite(oneCenter, LOW);
  delay(75);
  digitalWrite(oneCenter, HIGH);
  delay(250);
  digitalWrite(twoCenter, LOW);
  delay(75);
  digitalWrite(twoCenter, HIGH);

  delay(90500); //곡 길이 

  while(i<4) {
    digitalWrite(oneCenter, LOW); //결과창 연타 
    digitalWrite(twoCenter, LOW);
    delay(50);
    digitalWrite(oneCenter, HIGH);
    digitalWrite(twoCenter, HIGH);
    delay(50);
    i++;
}

  i=0;

  delay(21000);

  digitalWrite(oneCenter, LOW); //UCS 선택완료 
  delay(75);
  digitalWrite(oneCenter, HIGH);
  delay(250);
  digitalWrite(twoCenter, LOW);
  delay(75);
  digitalWrite(twoCenter, HIGH);
  delay(250);
  digitalWrite(oneCenter, LOW);
  delay(75);
  digitalWrite(oneCenter, HIGH);
  delay(250);
  digitalWrite(twoCenter, LOW);
  delay(75);
  digitalWrite(twoCenter, HIGH);
  
  delay(90500); //곡 길이 

  while(i<4) {
    digitalWrite(oneCenter, LOW); //결과창 연타 
    digitalWrite(twoCenter, LOW);
    delay(50);
    digitalWrite(oneCenter, HIGH);
    digitalWrite(twoCenter, HIGH);
    delay(50);
    i++;
}

  i=0;

  delay(7000);

  while(i<4) {
    digitalWrite(oneCenter, LOW); //게임종료 연타 
    digitalWrite(twoCenter, LOW);
    delay(50);
    digitalWrite(oneCenter, HIGH);
    digitalWrite(twoCenter, HIGH);
    delay(50);
    i++;
}

  i=0;

  delay(14000); //게임오버 대기 

}
