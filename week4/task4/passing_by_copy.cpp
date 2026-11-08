#include <iostream>
/*
#include <cmath>
int main(){
    double n;

    std::cout << "Enter a number: " << std::endl;
    std::cin >> n;
    std::cout << "The absolute value of " << n << " is " << abs(n) << std::endl;
}
*/

double myabsfunc(double in){
    if(in < 0){
        in = -in;
    }
    else{
        in = in;
    }
    
    return in;
}

int main(){
    double n;

    std::cout << "Enter a number: " << std::endl;
    std::cin >> n;
    std:: cout << "The absolute value of " << n << " is " << myabsfunc(n) << std::endl;
}