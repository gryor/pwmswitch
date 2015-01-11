
int low = 890;
int high = 1810;
int raw = 0;
int value = 0;

enum {
	PIN_PWM0 = A3,
	PIN_RELAY0 = 2
};

void updateRelay(int relaypin, int value)
{
	if(value >= 50)
		digitalWrite(relaypin, HIGH);
	else
		digitalWrite(relaypin, LOW);
}

void setup()
{
	//Serial.begin(9600);
	pinMode(PIN_PWM0, INPUT);
	pinMode(PIN_RELAY0, OUTPUT);
}

void loop()
{
	value = map(pulseIn(PIN_PWM0, HIGH), low, high, 0, 100);

	updateRelay(PIN_RELAY0, value);

	//Serial.println(value);
}
