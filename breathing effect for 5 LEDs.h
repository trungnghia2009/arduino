/*
Breathing effect at once for 5 LEDs
*/
int d = 5;

void setup() {
	pinMode(3, OUTPUT);
	pinMode(5, OUTPUT);
	pinMode(6, OUTPUT);
	pinMode(9, OUTPUT);
	pinMode(10, OUTPUT);
}

void loop() {
	for (int i = 0; i < 256; i ++) {
		analogWrite(3, i);
		analogWrite(5, i);
		analogWrite(6, i);
		analogWrite(9, i);
		analogWrite(10, i);
		delay(d);
	}
	
	for (int i = 255; i >= 0; i--) {
		analogWrite(3, i);
		analogWrite(5, i);
		analogWrite(6, i);
		analogWrite(9, i);
		analogWrite(10, i);
		delay(d);
	}
	delay(200);

}

/*
Breathing effect at once for 5 LEDs - less code version
*/
int d = 5;
int myPins[5] = {3, 5, 6, 9, 10};

void setup() {
	pinMode(3, OUTPUT);
	pinMode(5, OUTPUT);
	pinMode(6, OUTPUT);
	pinMode(9, OUTPUT);
	pinMode(10, OUTPUT);
}

void loop() {
	for (int i = 0; i <=4; i++) {
		for (int j = 0; j < 256; j++){
			analogWrite(myPins[i], j);
		}
		delay(d);
		
		for (int j = 255; j >=0; j--){
			analogWrite(myPins[i], j);
		}
		delay(d);
	}
	delay(200);
}


/*
Breathing effect sequentially for 5 LEDs
*/


















