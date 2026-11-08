#include <iostream>

/*
int main(){
    int num, rem;

    std::cout << "Please enter a number: " << std::endl;
    std::cin >> num;

    rem = num % 2;

    if(rem == 0){
        std::cout << num << " is even" << std::endl;
    }
    else{
        std::cout << num << " is odd" << std::endl;
    }
}
*/

int main(){
    double num, absv;
    std::cout << "Enter a number: " << std::endl;
    std::cin >> num;

    if(num<0){
        absv = -num;
    }
    else{
        absv = num;
    }

    std::cout << "The absolute value of " << num << " is " << absv << std::endl;
}

