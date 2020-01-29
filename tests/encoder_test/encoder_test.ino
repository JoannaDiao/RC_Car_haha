#include "encoder.h"

const byte left_encoder_interrupt_pin = 2;
const byte right_encoder_interrupt_pin = 3;
const byte legt_encoder_direction_pin = 4;
const byte right_encoder_direction_pin = 5;

Encoder left_encoder(left_encoder_interrupt_pin, left_encoder_direction_pin);
Encoder right_encoder(right_encoder_interrupt_pin, right_encoder_direction_pin);

void setup() {
  Serial.begin(115200);
  delay(1000);
  Serial.println("Turn the encoder");

  left_encoder.begin();
  right_encoder.begin();
}

void loop() {
  long left_encoder_pulse_count = left_encoder.pulseCount();
  long right_encoder_pulse_count = right_encoder.pulseCount();

  Serial.print(left_encoder_pulse_count);
  Serial.print("\t");
  Serial.print(right_encoder_pulse_count);
  Serial.println("");
  
  // Wait 1s
  delay(1000);
}
