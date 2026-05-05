# 🛏️ Bedtime Automatic Light Timed Switch – No Relay, Just Smart Timing

This project is a minimalist Arduino-based switch that turns off your room light 15 seconds (or a custom set duration) after powering on — so you can hop into bed without fumbling in the dark.

Best part? It uses no relay at all. Just a servo motor and clever timing logic.

## 🧠 Inspiration

I was tired of switching off the light and walking to bed in the dark. This was my hands-on solution — a servo-powered auto shut-off that mimics the relay functionality without needing one. 
This uses the most minimum components and anybody can make this.


## 🎥 Demo

https://github.com/user-attachments/assets/e8c0bdb7-0464-4ba0-bcbe-39047f0715e5


## ✨ What Makes This Project Unique

- 🛑 No relay switch used – fully mechanical
- ⏲️ 15-second delay before lights turn off
- 🤖 Built using just an Arduino Nano and a servo motor
- 🌙 Perfect for bedtime routines
- 🔌 Plug & Go — no need for buttons or remotes and is extremely compact and portable

## 🧰 Components Used

- Arduino Uno
- Servo Motor (SG90 or compatible)
- 9V battery (Can use an USB as power supply too)
- (Optional) 3D-printed mount or taped rig for servo to press the switch (if you want to make the setup more sturdy)

## ⚙️ How It Works

1. Power on the setup.
2. The servo arm stays in the "ON" position.
3. After 15 seconds, the Arduino sends a signal to the servo to move and flip the switch to "OFF".
4. You’re already cozy in bed. Mission accomplished.

## 🛠️ Setup Instructions

1. Mount the servo securely over your physical light switch. I used masking tape as it was a temporary setup.
2. Plug in the Arduino setup to power. (9V battery)
3. That's literally it — enjoy the auto turn-off after 15 seconds, or the timed duration that you have custom set!


## 🙌 Creator

Built by Siddhanth Panikar
