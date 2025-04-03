# 2Day 
---

## 💬 EUART란?

MCU 내부에 있는 **시리얼 통신 모듈**로, 외부와 입출력 통신을 할 수 있는 장치 (레지스터 기반).  
→ UART(Universal Asynchronous Receiver/Transmitter)의 일종이며,  
**디지털 데이터를 송수신**하는 데 사용됨. 디버깅에도 아주 많이 쓰임!

---

## 🧠 용어 정리

| 용어 | 의미 | 비고 |
|------|------|------|
| **TX** | Transmit | 데이터를 **보내는 선 (MCU 기준)** |
| **RX** | Receive | 데이터를 **받는 선 (MCU 기준)** |
| **TP** | Test Point | 핀을 직접 납땜하지 않고도 신호를 꺼내거나 분석할 수 있게 만든 중간 포인트 |
| **RXD1** | Net 이름 | RC7 TX 출력 신호가 지나가는 회로망 이름 |
| **R1OUT** | MAX3232 핀 이름 | RS-232 신호를 TTL로 변환해서 **MCU or USB로 출력**하는 핀 |

---

## 🛠️ 시리얼 디버깅이란?

> **MCU의 내부 상태를 외부로 출력해서 확인하는 가장 기본적인 디버깅 방법**  
> `printf()` 같은 명령을 통해 문자열을 보내고,  
> PC에서 이를 **터미널 프로그램(EBTerminal 등)**으로 확인함.

---

## 🔁 시리얼 디버깅 회로 흐름 요약

> ✅ 이 회로는 **MCU → PC 방향 단방향 통신**으로  
> **"RC7 → MAX3232 → USB 시리얼 → EBTerminal"** 구조입니다.

```plaintext
🔹 MCU (RC7 - TX)
    ⬇️
🔸 RXD1 (Net Name)
    ⬇️
🔹 TP1 (Test Point)
    ⬇️
🔸 MAX3232 (R1OUT)
    ⬇️
🔹 USB to Serial (RX Pin)
    ⬇️
💻 PC (EBTerminal)

```


- ✅ 실제로는 MCU의 TX 신호가 MAX3232를 통해 **R1OUT으로 나감**
- ✅ 그걸 PC 쪽 USB 시리얼 모듈이 **RX로 받아들이는 구조**임!
- ✔️ 이 회로는 **RX 기능이 꺼진 상태(EUSART 수신 비활성)**이기 때문에 → TX 단방향만 사용함

---

## 📦 관련 개념

<details>
<summary><strong>🔌 MAX3232, RS-232, TTL 차이</strong></summary>

### ✅ MAX3232
- TTL ↔ RS-232 레벨 변환기
- MCU와 PC/장비 간 안전한 시리얼 통신 연결을 도와줌

### ✅ RS-232 vs TTL

| 항목 | RS-232 | TTL |
|------|--------|-----|
| 전압 범위 | ±3V ~ ±12V | 0 ~ 5V (또는 3.3V) |
| 논리 | +V = 0, –V = 1 (역전됨) | 0V = 0, 5V = 1 (직관적) |
| 거리 | 길게 가능 (노이즈 강함) | 짧은 거리용 |
| 용도 | PC, 장비 통신 | MCU, 센서 통신 |
| 직접 연결 | ❌ (MCU 고장 위험) | ✅

</details>

---

## ✅ 실습 순서 (Checklist)

1. **MCU TX 핀(RC7)**을 활성화하고, EUSART 설정을 완료
2. RC7 → `RXD1(Net)` → **TP1** → MAX3232 내부 → **R1OUT**에 연결
3. **R1OUT → USB to Serial 모듈의 RX**에 연결 (필요시 납땜)
4. **GND도 반드시 연결 (MCU ↔ MAX3232 ↔ USB 모듈 모두)** ✅
5. `printf()` 또는 `EUSART_Write()`로 문자열 출력 코드 작성 후 빌드
6. EBTerminal 실행 → 드라이버 설치된 COM 포트 선택
7. Baudrate 일치 여부 확인 (MCU와 PC 모두 예: 9600 or 115200)
8. **EBTerminal 창에서 데이터가 찍히는지 확인**




   






**주의!**  
시리얼 통신과 시리얼 디버깅은 비슷하면서도 다르다!
시리얼 디버깅을 했다는것은 단방향으로 통신했다는 뜻이고 시리얼 통신은 양방향 ( tx /rx) 모두 연결시켰다는 의미이다. 


### 샘플링 




## ADC ## 
Analog to digital converter의 약자로 




## TImer ## 




## Mtouch ## 








