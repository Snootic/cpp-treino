#include <iostream>

int main() {
    double number;
    double number2;
    std::cout << "Insira um número: ", std::cin >> number;
    std::cout << "Insira outro número: ", std::cin >> number2;
    std::cout << "A soma dos números é: " << number + number2 << std::endl;
    std::cout << "A subtração dos números é: " << number - number2 << std::endl;
    std::cout << "A divisão dos números é: " << number / number2 << std::endl;
    std::cout << "A multiplicação dos números é: " << number * number2 << std::endl;

    int number3;
    int number4;
    std::cout << "Insira um terceiro número: ", std::cin >> number3;
    std::cout << "Insira um quarto número: ", std::cin >> number4;
    std::cout << "O módulo dos números é: " << number3 % number4 << std::endl;
    return 0;
}