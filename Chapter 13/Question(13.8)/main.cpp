#include <iostream>

struct Website {

    int watch{};
    double perc{};
    double avg{};

};

void value(const Website& people){

    std::cout << "How many ads were watched: " << people.watch << '\n';
    std::cout << "What percentage of users clicked on an ad: " << people.perc << "% "<<'\n';
    std::cout << "The average earnings per clicked ad: " << people.avg << '\n';
      std::cout << "Daily earnings: " << people.avg * (people.perc/100) * people.watch << '\n';

}

double entervalue(){

    std::cout << "Enter the numbers: ";
    double input;
    std::cin >> input;
    return input;
}

int main(){

    Website first {entervalue(),entervalue(),entervalue()};

    value(first);

    return 0;
}
