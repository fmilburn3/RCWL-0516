/*
 * Energia sketch demonstrating RCWL-0516 "doppler radar microwave
 * motion sensor module"
 * 
 * Connections:
 * RCWL-0516      LaunchPad
 * ---------      ---------
 * 3V3            Not connected
 * GND            GND
 * OUT            pin 10
 * VIN            5V
 * CDS            Not connected
 * 
 * Tested on MSP430F5529P LaunchPad using Energia V18
 * 
 * Released into the public domain
 * F. Milburn     June 2017
 */

int  detectPin = 10;
bool detect    = false;
int  led       = RED_LED;

void setup() {
  Serial.begin(115200);
  Serial.println("Starting...\n");
  pinMode (detectPin, INPUT);
  pinMode (led, OUTPUT);
}

void loop() {
  
  detect = digitalRead(detectPin);

  if(detect == true) {
    digitalWrite(led, HIGH);
    Serial.println("Movement detected");
  }
  else {
    digitalWrite(led, LOW);
  }

  delay(1000);
}
