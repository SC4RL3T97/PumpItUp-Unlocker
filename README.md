# PumpItUpXX-Brain-Power-Unlocker

[NOTICE]
-------------

Unexpected errors and breakdowns may occur due to the use of  
this source code and the direct connection of equipment to Pump It Up,  
and all responsibility lies with the user.  
It is provided in Korean, so please use a translator.


[주의사항]
-------------

이 소스코드의 사용과 Pump it up 기체에 직접적인 장비 연결에 대한 손상, 오류 등을 초례할 수 있습니다.  
이에 대한 피해 보상은 그 누구도 해주지 않으며, 모든 책임은 사용자 본인에게 있습니다.


[머리말]
-------------

Pump it up XX 버전에 수록된 Brain Power 악곡을 해금하기 위한 오토메이션 툴 가이드입니다.  
장치를 연결하여 펌프 기체를 자동으로 조작하여 사람이 버튼 하나하나 누르지 않고 해금이 가능합니다.  
이미 이 장치를 만들 지식이 어느정도 있고 이해가 될 경우에만 제작하는걸 권장해드립니다.  
사업장에서 운영하는 기체일 경우 눈에 띄지 않게 주의하세요.


[테스트]
-------------

LX 기체에서 구동하였습니다.  
1회당 작동 시간은 약 4분 15초 입니다.  
1시간에 약 1.6~2% 정도가 올라갑니다. (21.01.16 업데이트 이전 기준)  
테스트 결과 펌프 기체가 과부하에 걸려 렉이 걸릴 수 있습니다.  
이 경우에는 펌프 기체를 재부팅 해주세요.  

작동 영상  
https://youtu.be/oCq5KRuHL8o


!!! 필히 위 내용을 모두 읽고 진행하세요. !!!
=============



[준비물]
-------------

1. Arduino UNO R3 보드 2개
2. 브레드 보드 1개
3. 4채널 릴레이 모듈 (5V) 1개
4. 펌프 발판 2핀 커넥터 4개 (없으면 점퍼나 연선으로 직접 연결)
5. 수동형 부저 1개 (옵션)
6. 스텝 모터 1개
7. 펌프 잇업 카드 (AM.PASS) 1개
8. USB B타입 케이블 (아두이노 케이블) 2개
9. 5V USB 충전기 1개
* 브레드 보드 사용시 점퍼선과 연선 필요, 직접적인 납땜을 할시 연선 필요
