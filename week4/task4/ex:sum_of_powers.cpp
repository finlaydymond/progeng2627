#include <iostream>
#include <cmath>

double sum_of_powers(int x, int n){
    double sum = 0;
    for(int i = 1; i < (n+1); i++){
        sum += pow(x, i);
    }
    return sum;
}

int main(){
    int num;
    int exponent;
    std::cin >> num;
    std::cin >> exponent;
    std::cout << "The sum of powers is " << sum_of_powers(num, exponent) << std::endl;
}
