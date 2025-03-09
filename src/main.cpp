#include <iostream>
#include "utils.cpp"

int main() {
    int a = 2;
    int b = 3;

    std::cout << "PLUS: " << add(a, b) << std::endl;
    std::cout << "MINUS: " << subtract(a, b) << std::endl;
}
