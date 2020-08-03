
/*
 * Arduino UNO, read voltage 0-5V
 * 
 * Measure the voltage from 0-5V on the A3 PIN, and output the result in the serial monitor.
 * 
 * Created 18. March 2020
 * by Stian Østhus Lund
 * 
 */


#define VCCREADPIN A3                // PIN 2 (D3, PWM, A3)

void setup() {
  Serial.begin(9600);                // Initialize serial communication

  pinMode(VCCREADPIN, INPUT);        // Set the voltage read pin to input mode
}

void loop() {
  int raw = map(analogRead(VCCREADPIN), 0, 1023, 0, 5000);    // Map the analogRead output (0-1023) to a value from 0-5000
  float voltage = float(raw) / 1000;                          // Convert the raw integer to a float and divide by 1000 to get the value in volts
  
  Serial.println(voltage);           // Print the voltage value to the serial monitor
}
