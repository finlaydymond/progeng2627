#include <iostream>

int main(){
    int n, highest = 0;

    while(n!=0){
        std::cin >> n;
        if(n > highest){
            highest = n;
        }
    }

    std::cout << "maximum so far: " << highest << std::endl;
}