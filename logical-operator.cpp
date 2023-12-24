#include <iostream>

int higher(bool adult){
    int age;
    if (adult){
        std::cout << "Check if you're an adult (input your age): ", std::cin >> age;
        system("clear");
        if (age < 18) {
            std::cout << "Unfortunately you're not an adult :(" << std::endl;
            std::cout << "You're still " << 18 - age << " Years behind from becoming an adult" << std::endl;
        }else {
        std::cout <<"Congrats! You're an adult!" << std::endl;
        std::cout <<"You've been an adult for " << age - 18 << " years! Impressive!" << std::endl;
        }
        return 0;
    }
    else{
        std::cout << "Check if you're a child (input your age): ", std::cin >> age;
        system("clear");
        if (age > 17){
            std::cout << "You're an adult! get out!!" << std::endl;
            std::cout << "You've been an adult for " << age - 18 << " years, UGH" << std::endl;
        }else{
            std::cout << "Yay, you're a child!" << std::endl;
            std::cout << "You'll be a child for more " << 18 - age << " years! Enjoy your time!" << std::endl;
        }
        return 0;
    }
}

int andOrEqual(){
    int number1;
    int number2;
    std::cout << "Insert the first number: ", std::cin >> number1;
    std::cout << "Insert the second number: ", std::cin >> number2;

    system("clear");
    if (number1 == number2){
        std::cout << "Both numbers are equal!" << std::endl;
    }
    else{
        std::cout << "Numbers are not equal!" << std::endl;
    }

    if (number1 > 0 && number2 > 0){
        std::cout << "Both numbers are positive!" << std::endl;
    }
    else if (number1 > 0 || number2 > 0){
        std::cout << "One of these numbers are positive!" << std::endl;
    }
    else{
        std::cout << "Both numbers are negative! :O" << std::endl;
    }
    return 0;
}

int isPrime(){
    
}

int main(){
    higher(true);
    higher(false);
    andOrEqual();
    return 0;
}