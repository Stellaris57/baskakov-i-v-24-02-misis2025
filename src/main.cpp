#include <iostream>

int add(int x, int y);
int subtract(int x, int y);
int subtract_(int x, int y);
int umnozh(int x, int y);

int main() {
    int a = 2;
    int b = 3;

    std::cout << "PLUS: " << add(a, b) << std::endl;
    std::cout << "MINUS: " << subtract(a, b) << std::endl;
    std::cout << "UMNOZH: " << umnozh(a, b) << std::endl;
    std::cout << "MINUS: " << subtract_(a, b) << std::endl;
    return 0;
}
