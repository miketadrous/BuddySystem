
int ledwave = D1;
int ledpat = D2;
int boardLed = D7;


void myHandler(const char *event, const char *data); // forward declaration

// We start with the setup function.

void setup() {

	
	pinMode(ledwave,OUTPUT); // led used for the wave signal
	pinMode(ledpat,OUTPUT); // led used for the pat signal
	pinMode(boardLed,OUTPUT); // Our on-board LED is output as well



	Particle.subscribe("Deakin_RIOT_SIT210_Photon_Buddy", myHandler);



	// Flashing boardLed as the start of the program
	digitalWrite(boardLed,HIGH);
	delay(100);
	digitalWrite(boardLed,LOW);
	delay(100);
	digitalWrite(boardLed,HIGH);
	delay(100);
	digitalWrite(boardLed,LOW);
	delay(100);
	digitalWrite(boardLed,HIGH);
	delay(100);
	digitalWrite(boardLed,LOW);


}


void loop() {


}


// Now for the myHandler function, which is called when the cloud tells us that our buddy's event is published.
void myHandler(const char *event, const char *data)
{


	if (strcmp(data,"wave")==0) {
		// if your buddy's signal is wave, then turn your ledwave on/off three times
	    digitalWrite(ledwave,HIGH);
	    delay(1000);
	    digitalWrite(ledwave,LOW);
	    delay(1000);
	    digitalWrite(ledwave,HIGH);
	    delay(1000);
	    digitalWrite(ledwave,LOW);
	    delay(1000);
	    digitalWrite(ledwave,HIGH);
	    delay(1000);
	    digitalWrite(ledwave,LOW);
	}
	else if (strcmp(data,"pat")==0) {
		// if your buddy's signal is pat, then turn your ledpat on/off three times
	    digitalWrite(ledpat,HIGH);
	    delay(1000);
	    digitalWrite(ledpat,LOW);
	    delay(1000);
	    digitalWrite(ledpat,HIGH);
	    delay(1000);
	    digitalWrite(ledpat,LOW);
	    delay(1000);
	    digitalWrite(ledpat,HIGH);
	    delay(1000);
	    digitalWrite(ledpat,LOW);
	}
	else {
		// if the data is something else, don't do anything.

	}
}