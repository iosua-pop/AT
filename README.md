# 💧 Smart Irrigation System (Autonomous & IoT-Based)

Acest proiect propune două soluții pentru irigarea inteligentă a plantelor:
- 🔹 Un **sistem autonom**, complet automatizat
- 🔹 Un **sistem IoT**, controlabil și monitorizabil de la distanță prin **Arduino IoT Cloud**

---

## 🚀 Scopul Proiectului

- Automatizarea udării în funcție de umiditatea solului
- Economisirea apei
- Control local (autonom) sau remote (IoT)
- Monitorizare în timp real prin cloud *(versiunea IoT)*

---


## 🧩 Componente Necesare

| Componentă                       | Imagine                          | Descriere                           |
|----------------------------------|----------------------------------|-------------------------------------|
| Arduino Uno WiFi R4              | <p align="center"><img src="Img_Doc/arduino_R4_Wifi.png" width="100"/></p> | Microcontroller cu WiFi             |
| Senzor umiditate sol (capacitiv) | <p align="center"><img src="Img_Doc/humidity_sensor.png" width="40"/></p> | Citește nivelul de umiditate        |
| Modul releu 5V                   | <p align="center"><img src="Img_Doc/releu.png" height="100"/></p>           | Controlează pompa                   |
| Pompă apă DC 3V–5V (submersible) | <p align="center"><img src="Img_Doc/water_pump.png" height="80"/></p>      | Asigură irigarea                    |
| Breadboard                       | <p align="center"><img src="Img_Doc/bread_board.png" width="100"/></p>     | Conectare fără lipire               |
| Fire jumper M-M                  | <p align="center"><img src="Img_Doc/jumper_wires_mm.png" height="100"/></p> | Conectare fără lipire               |
| Fire jumper M-F                  | <p align="center"><img src="Img_Doc/jumper_wires_mf.png" width="100"/></p> | Conectare fără lipire               |
| Baterie / Sursă externă          | <p align="center"><img src="Img_Doc/battery.png" width="100"/></p>         | Alimentare pentru pompă             |

| Componente Extra                 | Imagine                          | Descriere                           |
|----------------------------------|----------------------------------|-------------------------------------|
| Arduino IDE                      | *(fără imagine)*                 | Software pentru programare Arduino  |
| Rezervor Apa                     | <img src="Img_Doc/glass-water.png" width="100"/>     | Recipient apă                       |
| Ghiveci (cu planta)              | <img src="Img_Doc/pot.png" width="100"/>             | Pentru testarea sistemului          |

---

## ⚙️ Funcționare Generală

1. Senzorul măsoară nivelul de umiditate.
2. Dacă este sub un prag definit (20%), se activează pompa.
3. Pompa se oprește automat când solul e suficient de umed.
4. În varianta IoT: valorile pot fi vizualizate și comanda pompa de la distanță.

---

## 🔧 Variantele Proiectului

### ✅ 1. Versiunea Autonomă

- Funcționează local, fără conexiune la internet
- Complet automat, fără intervenție umană
- Ideal pentru grădini mici sau sere

### 🌐 2. Versiunea IoT (Arduino Cloud)

- Poți vedea nivelul de umiditate în timp real din browser
- Controlezi pompa manual (ON/OFF) din cloud
- Necesită configurare pe [Arduino IoT Cloud](https://iot.arduino.cc)

#### Variabile în Arduino Cloud:

| Nume          | Tip     | Funcție                        |
|---------------|---------|--------------------------------|
| stateHumidity | Integer | Afișează nivelul de umiditate  |
| stateMotor    | Boolean | Comandă ON/OFF pentru pompă    |

---

## 🧠 Diagrame de Circuit

- **Circuit versiune autonomă**

![](Img_Doc/Diagram.png)

- **Completare pentru versiune IoT**  

<p align="center">
  <img src="Img_Doc/Variables_irigation_system.PNG" width="300"/>
  <img src="Img_Doc/Dashboard_IoT_Irigation_System_off.PNG" width="300"/>
  <img src="Img_Doc/Dashboard_IoT_Irigation_System_on.PNG" width="300"/>
</p>

---

<p align="center">
  <img src="https://camo.githubusercontent.com/9494badd49f215e4673767f9f52725d8401f36802aa41cc110be4b6917bf0d30/68747470733a2f2f696d672e736869656c64732e696f2f62616467652f2d41726475696e6f2d3030393739443f7374796c653d666f722d7468652d6261646765266c6f676f3d41726475696e6f266c6f676f436f6c6f723d7768697465"/>
  <img src="https://camo.githubusercontent.com/88e1b21c4e11afd4f06cfb2b510dbb3690dbd300fb1a6d4676fd553a70bafa82/68747470733a2f2f696d672e736869656c64732e696f2f62616467652f632b2b2d2532333030353939432e7376673f7374796c653d666f722d7468652d6261646765266c6f676f3d63253242253242266c6f676f436f6c6f723d7768697465"/>
</p>
