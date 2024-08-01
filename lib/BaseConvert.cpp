/**
        BaseConvert - convert from one base to another. Binary, octal, hexadecimal, decimal, etc.
        @author OASIS systems
**/

#include "BaseConvert.h"
#include <iostream>
#include <string>

BaseConvert::BaseConvert() {}

// additional method for itoa
char* BaseConvert::reverse(char* buffer, int i, int j) {
    while (i < j) {
        char t = buffer[i];
        buffer[i++] = buffer[j];
        buffer[j--] = t;
    }

    return buffer;
}

// your C++ compiler may already include this method
char* BaseConvert::itoa(int value, char* buffer, int base) {
    if (base < 2 || base > 32) return NULL;

    int n = abs(value);
    int i = 0;

    do {
        int r = n % base;
        buffer[i++] = (r < 10) ? (r + '0') : (r - 10 + 'A');
        n /= base;
    } while (n);

    if (value < 0 && base == 10) buffer[i++] = '-';
    buffer[i] = '\0';

    return reverse(buffer, 0, i - 1);
}

// Base convertion simple algorithm
std::string BaseConvert::convert(std::string input_str, uint8_t input_base, uint8_t output_base) {
    int i = std::stoi(input_str, nullptr, input_base);
    return itoa(i, buffer, output_base);
}
