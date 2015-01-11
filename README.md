# pwmswitch
PWM controlled switch for arduino platform

Hardware
===
* Attiny45
* Mosfet FQP30N06L

How to use
===
Tested with arduino pro micro and attiny45.

1. Upload the sketch.ino into a attiny45
2. Connect GND, VCC and Analog Pin 3 (pin 2 on attiny45 ---> RC signal) to the receiver
3. Connect Pin 2 (pin 7 on attiny45) to the gate of the mosfet
4. Connect Mosfet's source to GND and Mosfet's drain to the target's GND pin (e.g. led's minus)

If correctly set up and still not working, there's the debug lines commented in the sketch.ino. Uncomment these lines and by using a serial connection check the low and high values for your receiver. The default values are for FrSky Taranis X8R receiver.
