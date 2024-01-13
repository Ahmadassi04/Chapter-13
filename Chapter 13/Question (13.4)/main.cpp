#include <iostream>
#include <string>

enum class Animal{

    pig,
    chicken,
    goat,
    cat,
    dog,
    duck,
};

std::string  getAnimalName(Animal animal){

    switch(animal){
        case Animal::pig: return "pig";
            break;
        case Animal::chicken: return "chicken";
            break;
        case Animal::goat: return "goat";
            break;
        case Animal::cat: return "cat";
            break;
        case Animal::dog: return "dog";
            break;
        case Animal::duck: return "duck";
            break;
        default: return "ERROR";
            break;

    }

}

int printNumberOfLegs(Animal animal){

    switch(animal){
        case Animal::pig: return 4;
            break;
        case Animal::chicken: return 2;
            break;
        case Animal::goat: return 4;
            break;
        case Animal::cat: return 4;
            break;
        case Animal::dog: return 4;
            break;
        case Animal::duck: return 2;
            break;
        default: return 0;
            break;

}

}

int main(){
    Animal animal{Animal::cat};
    Animal animal2{Animal::chicken};
    std::cout << "A " << getAnimalName(animal) << " has " << printNumberOfLegs(animal) << " legs" << '\n';
    std::cout << "A " << getAnimalName(animal2) << " has " << printNumberOfLegs(animal2) << " legs";

    return 0;
}
