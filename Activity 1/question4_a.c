#include <stdio.h>
#include<stdint.h>
// Macro to set the specified bit in a number
#define SET_BIT(num, bit) (num |= (1U << (bit)))

// Macro to clear the specified bit in a number
#define CLEAR_BIT(num, bit) (num &= ~(1U << (bit)))

// Macro to toggle (invert) the specified bit in a number
#define TOGGLE_BIT(num, bit) (num ^= (1U << (bit)))

int main() {
    uint8_t num = 0x25;

    SET_BIT(num, 3);
    printf("After setting bit 3: %x\n", num);

    CLEAR_BIT(num, 1);
    printf("After clearing bit 1: %x\n", num);

    TOGGLE_BIT(num, 5);
    printf("After toggling bit 5: %x\n", num);

    return 0;
}