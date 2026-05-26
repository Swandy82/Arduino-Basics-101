//Basic LED blink, you can see your arduino LED_BUILTIN blink every 1/2 second.

int led = 13;

void setup() {
  
  pinMode(led, OUTPUT); //Set pin mode for pin 13 OUTPUT.

}

void loop() {
  
  digitalWrite(led, HIGH); //5v signal for pin 13.
  delay(500); //Wait 1/2 second.
  
  digitalWrite(led, LOW); //0v signal for pin 13.
  delay(500); //wait 1/2 second.
 

}
