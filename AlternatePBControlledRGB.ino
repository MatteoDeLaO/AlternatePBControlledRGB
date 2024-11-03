int pushButton = 2; // Pin for the push button
void setup() {
    // Initialize the push button pin
    pinMode(pushButton, INPUT); // No internal pull-up
    // Set LED pins as outputs
    pinMode(9, OUTPUT);
    pinMode(10, OUTPUT);
    pinMode(11, OUTPUT);
    // Set initial state: Red and Green LEDs on
    digitalWrite(9, 1);
    digitalWrite(10, 1);
    digitalWrite(11, 0); // Blue LED off
}
void loop() {
    // Read the input pin
    int buttonState = digitalRead(pushButton);
    // Check button state
    if (buttonState == 1) {
        // Button pressed: Turn on Red and Blue LEDs
        digitalWrite(9, 1);
        digitalWrite(10, 0); // Green LED off
        digitalWrite(11, 1);
    } else {
        // Button not pressed: Turn on Red and Green LEDs
        digitalWrite(9, 1);
        digitalWrite(10, 1);
        digitalWrite(11, 0); // Blue LED off
    }
    delay(50);  // Small delay for stability
}
