#include <iostream>

int main() {
    int number;
    int number2;
    std::cout << "Soma" << std::endl;
    std::cout << "Insira um número: ", std::cin >> number;
    std::cout << "Insira outro número: ", std::cin >> number2;
    std::cout << "A soma dos números é: " << number + number2 << std::endl;
    return 0;
}