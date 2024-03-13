
/**
 * tooSpecific.cpp
 *
 * This C++ program uses the standard input/output library (iostream) and demonstrates
 * type conversion and printing different data types.
 *
 * Here's a breakdown of the important parts of the code:
 *
 * The function needInt(int i) takes an integer as an argument and prints it to the console.
 * std::boolalpha is used to print bool variables as true or false instead of 1 or 0.
 *
 * The main function makes use of the std::cout object from the iostream library to print things to the console.
 *
 * (1) A double variable d is declared and initialized with the value 1.234. It is then printed to the console.
 * (2) The needInt function is called with d as argument. However, d is a double and needInt expects an int.
 * So, implicit type conversion (also called type coercion) occurs here. The double value is converted to int
 * by truncating the decimal part and only the integer part {1} is used as the argument.
 * Similarly,
 * (3) A bool variable b is declared and initialized to true. It is then printed to the console.
 * (4) The needInt function is called with b as an argument. Like before, type conversion occurs here.
 * In C++, the bool value true is equivalent to an int value of 1. So, b is converted to int and the
 * integer {1} is used as the argument.
 */

#include <iostream>

void needInt(int i) {
   std::cout << "int: " << i << '\n';
}

int main() {
   std::cout << std::boolalpha << '\n';

   double d{1.234};                             // (1)
   std::cout << "double: " << d << '\n';
   needInt(d);                                  // (2)

   std::cout << '\n';

   bool b{true};                                // (3)
   std::cout << "bool: " << b << '\n';
   needInt(b);                                  // (4)

   std::cout << '\n';
}

