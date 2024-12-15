# Raspberry pi Drivers
### 4.Servo Motor

This script controls a **servo motor** using Raspberry Pi's **GPIO pin 12** (BCM) with **PWM**.

#### Requirements

- **Raspberry Pi**  
- **RPi.GPIO** (`pip install RPi.GPIO`)  
- **Servo motor** (connected to GPIO 12)

---

### 5.Systemd
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
