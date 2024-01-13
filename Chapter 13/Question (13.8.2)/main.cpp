#include <iostream>

struct Fraction{

    int numerator;
    int denominator;
};

Fraction getInput(Fraction x){

    std::cout << "Enter a value for the numerator: ";
    std::cin >> x.numerator;

    std::cout << "Enter a value for the denominator: ";
    std::cin >> x.denominator;

    std::cout << '\n';

    return x;
}

Fraction multiply(Fraction x, Fraction y){
    Fraction mult;

    mult.numerator = x.numerator * y.numerator;
    mult.denominator = x.denominator * y.denominator;

    return mult;
}

int main(){

    Fraction num1{};
    Fraction num2{};

    Fraction answer{multiply(getInput(num1), getInput(num2))};

    std::cout << "Your fractions multiplied together: " << answer.numerator << "/" << answer.denominator;

    return 0;
}
