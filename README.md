# Raspberry pi Drivers

### 3.PWM
#### This script controls the **brightness of an LED** using Raspberry Pi's **GPIO pin 12** (BCM) with **PWM**.
#### Dependancies
- **RPi.GPIO** (`pip install RPi.GPIO`)  

---

### 4.Servo Motor

#### This script controls a **servo motor** using Raspberry Pi's **GPIO pin 12** (BCM) with **PWM**.

#### Dependancies
- **RPi.GPIO** (`pip install RPi.GPIO`)  

---

### 5.Systemd

#### Creating a custom startup program

To set up and manage the `sayHello.service`, run the following commands:
```bash
sudo cp sayHello.service /etc/systemd/system/
sudo systemctl daemon-reload
sudo systemctl enable sayHello.service
sudo systemctl start sayHello.service
sudo systemctl status sayHello.service
```

> output
![Screenshot from 2024-12-12 06-14-54](https://github.com/user-attachments/assets/225df062-6443-411f-93d0-a59247b6779c)

---

### 6.UART

#### Communication between Raspberry pi on (ttyS0) and my laptop on (ttyUSB0) via USB To TTL

> Enable Serial of Raspberry:
```bash
sudo raspi-config
```
Go to Interfacing Options → Serial and enable it.

> To download putty, for showing received messages on specified serial port:
```bash
sudo apt update
sudo apt install putty
```

> output
![Screenshot from 2024-12-12 22-20-03](https://github.com/user-attachments/assets/ce1e1936-f403-4878-b082-764b1779c010)

---

### 8.I2C

#### Communication between Raspberry pi and ESP32

> Enable Serial of Raspberry:
```bash
sudo raspi-config
```
Go to Interfacing Options → I2C and enable it.

> output
![Screenshot from 2024-12-14 04-38-46](https://github.com/user-attachments/assets/9a2f2799-dea9-42a7-a225-b803ac3d6b33)

---

### 9.TCP

#### Port Communication 

```bash
nc -lvp <portNumber>
```

> ![Image](https://github.com/user-attachments/assets/bb664fdd-5daa-49f3-bee6-17bb875d2125)

---

### 10.WebServer

```bash
# in your browser:
<raspberry_ip_address>:<port_number>
```

> ![Image](https://github.com/user-attachments/assets/6adb8738-3cc6-4ddc-bf67-1659814cb387)
