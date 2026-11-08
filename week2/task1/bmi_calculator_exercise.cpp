#include <iostream>

int main(){

    double weight, height, bmi;

    std::cout << "What is your weight in kg: ";
    std::cin >> weight;

    std::cout << "What is your height in m: ";
    std::cin >> height;

    bmi = weight/(height*height);

    std::cout << "Your bmi is " << bmi << std::endl;

}

