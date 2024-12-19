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

#### Communication between Raspberry pi on (ttyS0) and my laptop on (ttyUSB0)

> To download putty, for showing received messages on specified serial port:
```bash
sudo apt update
sudo apt install putty
```

> output
![Screenshot from 2024-12-12 22-20-03](https://github.com/user-attachments/assets/ce1e1936-f403-4878-b082-764b1779c010)
