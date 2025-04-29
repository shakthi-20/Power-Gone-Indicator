# 🔌 Power Gone Indicator using Arduino

This is a simple project I built using an Arduino to **indicate when the main electricity goes OFF**, even if the inverter is running. It turns on an LED when the power is out — super handy for homes like mine where it's not always obvious if the current is gone ⚡💡

---

## Why I Made This

In most middle-class homes, inverters keep basic things like lights and fans running during a power cut. But heavy stuff like **TVs, fridges, or grinders** are usually not connected to the inverter to avoid overloading it.

The problem? Sometimes the **TV is on an inverter socket** — so it keeps running even when the power is gone. My grandma doesn’t always realize there's a power cut and continues watching TV, which can drain the inverter faster 🔋📺

So, I made this tiny indicator that **lights up the moment power goes off**. Now, when the LED turns on, my grandma knows to turn off the TV 😄

---

## ⚙️ How It Works

- I used a regular USB phone charger plugged into a wall socket that only works when the **main power is present**.
- Arduino reads the 5V from that charger using an analog pin.
- When there's voltage → Power is ON → LED is OFF.
- When there's no voltage → Power is OFF → LED is ON ✅

Super simple, and works like a charm!

---

## ✅ What It Helps With

- Makes it easy to know when the power is actually gone.
- Saves inverter battery by avoiding unnecessary usage.
- Especially useful for **older people** who may not notice inverter backup is running.
- Can be placed near the TV or any other appliance that's not inverter-backed.

---

## 💡 Ideas to Improve It

- Add a buzzer for sound alerts 🔊
- Make it run on battery so it works even during total blackouts 🔋
- Use ESP32 to send alerts to a phone 📲
- Maybe even link it to smart home setups!

---

## 🎥 Quick Demo

I’ve added a short video showing how the LED turns ON as soon as the power goes OFF. It’s really satisfying to see it work! 😄

---


