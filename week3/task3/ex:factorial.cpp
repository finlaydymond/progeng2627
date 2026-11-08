#include <iostream>

int main(){
    int n, acc = 1;

    std::cin >> n;

    for(int i = 0; n > 0; i++){
        acc = acc * n;
        n -= 1;
    }

    std::cout << acc << std::endl;
}
