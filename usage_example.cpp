/**
 *      Example of base conversion (without external libraries)
 *      @author OASIS systems
 **/
 
#include <iostream>

// additional method for itoa
char* reverse(char* buffer, int i, int j) {
  while (i < j) {
    char t = buffer[i];
    buffer[i++] = buffer[j];
    buffer[j--] = t;
  }

  return buffer;
}

// your C++ compiler may already include this method
char* itoa(int value, char* buffer, int base) {
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
char buffer[33];
std::string convertBase(std::string input_str, uint8_t input_base, uint8_t output_base){
    int i = std::stoi(input_str, nullptr, input_base);
    return itoa(i, buffer, output_base);
}

int main()
{
    std::cout << convertBase("11111101000", 2, 10);

    return 0;
}
