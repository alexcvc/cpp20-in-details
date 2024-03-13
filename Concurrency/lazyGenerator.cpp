// lazyGenerator.cpp

#include <iostream>
#include <coroutine>

auto generatorForNumbers(int begin, int inc = 1) {
    int i = begin;
    while (true) {
        co_yield i;
        i += inc;
    }
}

int main() {

    std::cout << '\n';

    const auto numbers = generatorForNumbers(-10);
  
    for (int i= 1; i <= 20; ++i) std::cout << numbers() << " ";
  
    std::cout << "\n\n";

    for (auto n: generatorForNumbers(0, 5)) std::cout << n << " ";

    std::cout << "\n\n";

}