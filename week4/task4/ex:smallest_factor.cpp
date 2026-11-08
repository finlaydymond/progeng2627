#include <iostream>

int smallest_factor(int n){
    for(int i = 2; i < n+2; i++){
        if(n % i == 0){
            return i;
        }
    }
}

int main(){
    int n;

    std::cin >> n;

    std::cout << smallest_factor(n) << std::endl;
}
