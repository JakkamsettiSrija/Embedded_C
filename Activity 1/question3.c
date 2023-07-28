#include <stdio.h>
#include <stdint.h>

// Function to convert decimal to BCD (Binary-Coded Decimal)
uint8_t decimalToBCD(uint8_t decimalValue) {
    return ((decimalValue / 10) << 4) + (decimalValue % 10);
}

int main() {
    uint8_t decimalValue = 37;
    uint8_t bcdValue;

    bcdValue = decimalToBCD(decimalValue);

    printf("Decimal %d, BCD 0x%X\n", decimalValue, bcdValue);

    // The function is called again to demonstrate the correct output.
    bcdValue = decimalToBCD(decimalValue);

    printf("Decimal %d, BCD 0x%02X\n", decimalValue, bcdValue);

    return 0;
}