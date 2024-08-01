# BaseConvert
Convert from one base to another. Binary, octal, hexadecimal, decimal, etc<br>
Supports base with **2-32 bits**<br>
Average **performance is 200 nanoseconds** per conversion (0.0002 milliseconds)<br>
Check out [usage_example.cpp](usage_example.cpp) for simplest implementation<br>
Also, you can import files from [lib](lib) directory to your project and use BaseConvert easily (check out [lib_usage.cpp](lib_usage.cpp))

## Examples
Convert from binary to decimal:
```
BaseConvert bc;
bc.convert("11111101000", 2, 10)
```

Convert from binary to hexadecimal:
```
BaseConvert bc;
bc.convert("11111101000", 2, 16)
```

Convert from hexadecimal to decimal:
```
BaseConvert bc;
std::cout << convertBase("7E8", 16, 10)
```

## Suggestions
Feel free to suggest any changes 😊
