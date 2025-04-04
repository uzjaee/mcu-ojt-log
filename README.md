# MCU OJT 학습 기록 (PIC16F18855)

이 레포는 OJT 기간 동안 Microchip PIC16F18855 기반 MCU를 사용하여 학습한 내용을 기록한 저장소입니다. MCC를 활용한 핀 설정부터, LED, UART, ADC, Timer 등의 모듈을 단계별로 실습합니다.

## ✅ 환경
- MCU: PIC16F18855
- Toolchain: MPLAB X IDE, MCC, XC8 ,
- Serial Monitor: EBTerminal
- touch Monitor : Data Visualizer 
- 기타: 멀티미터, 전원 공급기 등

## 🎯 목표


<img src="https://github.com/user-attachments/assets/aeff7daa-02b5-42c5-92fd-64aa335663c3" alt="대체 텍스트" width="300"/>


Conductive Humidity Sensor 제작을 위한 MCU 기반 회로 구성 및 펌웨어 구현 기초를 익히는 것이 목표입니다.  
→ 센서 값 수집(ADC), 데이터 전송 및 상태 출력(EUART)) 등을 단계적으로 실습합니다.

## 🗂 학습 기록

| 날짜 | 주제 | 설명 | 정리 |
|------|------|------|-------|
| Day 1 | MCC, LED 제어 | MCC 핀 설정, 회로도 보기, LED 켜기 |[링크](./docs/1day.md) |
| Day 2 | ADC, EUART, Timer , MTouch | 시리얼 통신으로 값 출력, 타이머로 시간 측정 | [링크](./docs/2day.md) | 
| Day 3 | BreadBoard , 스탭모터 , pwm | 빵판에 연결된 모터모듈을 사용하여 스탭모터 동작시킨다. | [링크](./docs/3day.md) | 
