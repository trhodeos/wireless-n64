#include <msp430g2553.h>

int main() {
  WDTCTL = WDTPW + WDTHOLD;

  // Make the led pin an output for p1.0
  P1DIR |= 0x01;

  volatile int i;
  while (1) {
    for (i = 0; i < 10000; i++);
    P1OUT ^= 0x01;
  }

  return 0;
}
