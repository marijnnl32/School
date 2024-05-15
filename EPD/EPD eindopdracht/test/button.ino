const int BUTTON_STATE_RELEASED = 1;
const int BUTTON_STATE_CHECK_PRESSED = 2;
const int BUTTON_STATE_PRESSED = 3;
const int BUTTON_STATE_CHECK_RELEASED = 4;
const byte buttonAmount = 4;



int button_State[buttonAmount];

unsigned long button_Previous[buttonAmount];

const byte buttonPins[buttonAmount] = { 10, 11, 12, 13 };

const int BUTTON_INTERVAL = 100;

void button_Setup() {
  for (int i = 0; i < buttonAmount; i++) {
    button_State[i] = BUTTON_STATE_RELEASED;
  }
}

// Loop function for buttons
void button_Loop() {
  for (int i = 0; i < buttonAmount; i++) {
    switch (button_State[i]) {
      case BUTTON_STATE_RELEASED:
        if (buttonHardware_Down(buttonPins[i])) {
          button_Released_Exit(i);
          button_State[i] = BUTTON_STATE_CHECK_PRESSED;
          button_Check_Pressed_Entry(i);
        }
        break;
      case BUTTON_STATE_CHECK_PRESSED:
        if (buttonHardware_Up(buttonPins[i])) {
          button_Check_Pressed_Exit(i);
          button_State[i] = BUTTON_STATE_RELEASED;
          button_Released_Entry(i);
        } else if (buttonHardware_Down(buttonPins[i]) && (millis() - BUTTON_INTERVAL >= button_Previous[i])) {
          button_Check_Pressed_Exit(i);
          button_State[i] = BUTTON_STATE_PRESSED;
          button_Pressed_Entry(i);
        }
        break;
      case BUTTON_STATE_PRESSED:
        if (buttonHardware_Up(buttonPins[i])) {
          button_Pressed_Exit(i);
          button_State[i] = BUTTON_STATE_CHECK_RELEASED;
          button_Check_Released_Entry(i);
        }
        break;
      case BUTTON_STATE_CHECK_RELEASED:
        if (buttonHardware_Down(buttonPins[i])) {
          button_Check_Released_Exit(i);
          button_State[i] = BUTTON_STATE_PRESSED;
          button_Pressed_Entry(i);
        } else if (buttonHardware_Up(buttonPins[i]) && (millis() - BUTTON_INTERVAL >= button_Previous[i])) {
          button_Check_Released_Exit(i);
          button_State[i] = BUTTON_STATE_RELEASED;
          Serial.println("CLICK");

          // if (i == 1 || 2) {
          //   treinVoorbij = true;
          // } else if (i == 3) {
          //   autodetectieNoord = true;

          // }

          // else if (i == 4) {
          //   autodetectieZuid = true;
          // }
          button_Released_Entry(i);
        }
        break;
    }
  }
}

// Function to check if button is pressed (example function, replace with your actual implementation)
bool buttonHardware_Down(int buttonPin) {
  return digitalRead(buttonPin) == LOW;
}

// Function to check if button is released (example function, replace with your actual implementation)
bool buttonHardware_Up(int buttonPin) {
  return digitalRead(buttonPin) == HIGH;
}

// Button state transition functions
void button_Released_Entry(int buttonIndex) {
  // <nothing>
}
void button_Released_Exit(int buttonIndex) {
  // <nothing>
}
void button_Check_Pressed_Entry(int buttonIndex) {
  button_Previous[buttonIndex] = millis();
}
void button_Check_Pressed_Exit(int buttonIndex) {
  // <nothing>
}
void button_Pressed_Entry(int buttonIndex) {
  // <nothing>
}
void button_Pressed_Exit(int buttonIndex) {
  // <nothing>
   Serial.println(buttonIndex);

            if(buttonIndex == 0){
          autodetectieZuid = true;
                    Serial.println("zuid");
        }

                else if(buttonIndex == 1){
          autodetectieNoord = true;
          Serial.println("noord");

        }
        
           else if (buttonIndex == 3 || 2){
            if(satenumber == 9){
              treinVoorbij = true;
            }
          treinDetectie = true;
          Serial.println("TREIN");
        }


}
void button_Check_Released_Entry(int buttonIndex) {
  button_Previous[buttonIndex] = millis();
}
void button_Check_Released_Exit(int buttonIndex) {
  // <nothing>
}
