#include <stdio.h>
#include <stdint.h>

int main() {
    uint32_t lo, hi;
    __asm__ __volatile__ ("rdtsc" : "=a" (lo), "=d" (hi));
    printf("TSC value: %lu\n", ((uint64_t)hi << 32) | lo);
}
