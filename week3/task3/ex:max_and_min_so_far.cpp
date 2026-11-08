#include <iostream>

int main(){
    int n, highest = 0, minimum = 0;

    std::cin >> n;
    highest = n;
    minimum = n;

    while(n!=0){
        std::cin >> n;
        if(n > highest && n!=0){
            highest = n;
        }
        if(n < minimum && n!=0){
            minimum = n;
        }
    }

    std::cout << "maximum so far: " << highest << std::endl;
    std::cout << "minimum so far: " << minimum << std::endl;
}