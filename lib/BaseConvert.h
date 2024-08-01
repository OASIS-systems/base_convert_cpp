/**
        BaseConvert - convert from one base to another. Binary, octal, hexadecimal, decimal, etc.
        @author OASIS systems

        Example:
          BaseConvert bc;
          std::cout << bc.convert("11111101000", 2, 10) << std::endl;
        
        Output:
          2024
**/

#ifndef BaseConvert_h
#define BaseConvert_h

class BaseConvert{

private:
    char buffer[33];
    char* reverse(char* buffer, int i, int j);
    char* itoa(int value, char* buffer, int base);

public:
    BaseConvert(void);
    void convert(std::string input_str, uint8_t input_base, uint8_t output_base);
    void convert(std::string input_str, uint8_t input_base, uint8_t output_base, uint8_t bufferSize);

};
#endif

