#include <stdint.h>

/* Section A answers */
unsigned int a_q1_get_bit_5(unsigned int x) {
    return (x >> 4) & 1u;
}

unsigned int a_q2_set_bit_3(unsigned int x) {
    return x | (1u << 2);
}

unsigned int a_q3_clear_bit_6(unsigned int x) {
    return x & ~(1u << 5);
}

unsigned int a_q4_toggle_bit_1(unsigned int x) {
    return x ^ (1u << 0);
}

unsigned int a_q5_replace_bit_4(unsigned int x, unsigned int b) {
    unsigned int mask = 1u << 3;
    return (x & ~mask) | ((b & 1u) << 3);
}

unsigned int a_q6_get_left_3(unsigned int x) {
    return (x >> 29) & 1u;
}

unsigned int a_q7_clear_left_5(unsigned int x) {
    return x & ~(1u << 27);
}

unsigned int a_q8_set_left_2(unsigned int x) {
    return x | (1u << 30);
}

unsigned int a_q9_get_bit_2(unsigned int x) {
    return (x >> 1) & 1u;
}

/* Section B answers */
unsigned int b_q1_get_bit_7(unsigned int x) {
    return (x >> 6) & 1u;
}

unsigned int b_q2_set_bit_5(unsigned int x) {
    return x | (1u << 4);
}

unsigned int b_q3_clear_bit_2(unsigned int x) {
    return x & ~(1u << 1);
}

unsigned int b_q4_toggle_bit_8(unsigned int x) {
    return x ^ (1u << 7);
}

unsigned int b_q5_replace_bit_6(unsigned int x, unsigned int b) {
    unsigned int mask = 1u << 5;
    return (x & ~mask) | ((b & 1u) << 5);
}

unsigned int b_q6_get_left_5(unsigned int x) {
    return (x >> 27) & 1u;
}

unsigned int b_q7_clear_left_2(unsigned int x) {
    return x & ~(1u << 30);
}

unsigned int b_q8_set_left_6(unsigned int x) {
    return x | (1u << 26);
}

unsigned int b_q9_get_bit_9(unsigned int x) {
    return (x >> 8) & 1u;
}
