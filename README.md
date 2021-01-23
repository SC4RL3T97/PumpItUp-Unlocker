# PumpItUpXX-Brain-Power-Unlocker

[NOTICE]
Unexpected errors and breakdowns may occur due to the use of
this source code and the direct connection of equipment to Pump It Up,
and all responsibility lies with the user.
It is provided in Korean, so please use a translator.


[주의사항]
이 소스코드의 사용과 Pump it up 기체에 직접적인 장비 연결에 대한 손상, 오류 등을 초례할 수 있습니다.
이에 대한 피해 보상은 그 누구도 해주지 않으며, 모든 책임은 사용자 본인에게 있습니다.


[머리말]
Pump it up XX 버전에 수록된 Brain Power 악곡을 해금하기 위한 오토메이션 툴 가이드입니다.
장치를 연결하여 펌프 기체를 자동으로 조작하여 사람이 버튼 하나하나 누르지 않고 해금이 가능합니다. 
사업장에서 운영하는 기체일 경우 눈에 띄지 않게 주의하세요.


[테스트]
LX 기체에서 구동하였습니다.
1회당 작동 시간은 약 4분 15초 입니다.
1시간에 약 1.6~2% 정도가 올라갑니다.
테스트 결과 펌프 기체가 과부하에 걸려 렉이 걸릴 수 있습니다.
이 경우에는 펌프 기체를 재부팅 해주세요.


[준비물]
1. Arduino UNO R3 보드 2개
2. 브레드 보드 1개
3. 4채널 릴레이 모듈 (5V) 1개
4. 펌프 발판 2핀 커넥터 4개 (없으면 점퍼나 연선으로 직접 연결)
5. 수동형 부저 1개 (옵션)
6. 스텝 모터 1개
7. 펌프 잇업 카드 (AM.PASS) 1개
8. USB B타입 케이블 (아두이노 케이블) 2개
9. 5V USB 충전기 1개
*브레드 보드 사용시 점퍼선과 연선 필요, 직접적인 납땜을 할시 연선 필요


[제작 가이드]

STEP 0
펌프 기체 설정을 다음과 같이 변경합니다.
 4 Lives, Free play 

STEP 1
펌프 잇업 AM.PASS카드에 다음과 같은 User Custom Step(이하 UCS)를 등록합니다.
곡명: 서울 구경
채보 내용: 매우 짧은 홀드 노트 1개(5콤보 이하)

STEP 2
아두이노와 부품들을 조립합니다.

STEP 3
펌프 발판 뚜껑을 열어주고 각각 센서를 1개씩 분리해줍니다.
1P 중앙, 2P 중앙 좌상 좌하

STEP 4
아두이노에 연결된 릴레이와 펌프 발판과 연결합니다.

STEP 5
모터에 카드가 빙글빙글 돌도록 잘 붙여줍니다.

STEP 6
모터를 검정색 절연 테이프 등으로 카드 라더기 위에 부착하고 빙글빙글 돌때 카드가 찍히도록 하세요.

STEP 7
모터 아두이노를 펌프 1P USB 포트에 연결하여 구동시키고, 릴레이 아두이노를 충전기에 연결하여 전원을 켭니다.

STEP 8
모든 작동이 올바르게 하는지 20분정도 확인합니다.

STEP 9
잘 돌아가면 그대로 두면 됩니다.

STEP 10
작업이 끝나면 발판과 기체 설정을 원래대로 복구합니다.
