#include <iostream>

int main(){
    int n = 1, total = 0;

    std::cin >> n;
    while(n!=0){
        total += n;
        std::cout << "The sum so far is: " << total << std::endl;
        std::cin >> n;
    }
}