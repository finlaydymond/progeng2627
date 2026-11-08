#include <iostream>

void sort_three_numbers(double&n1, double&n2, double&n3){
    double temp1, temp2;
    temp1 = n2;
    temp2 = n3;
    if(n2 > n3){
        n3 = n2;
        n2 = temp2;
    }
    if(n1 > n2){
        n2 = n1;
        n1 = temp1;
    }
    if(n1 > n3){
        n3 = n1;
        n1 = temp2;
    }
}

int main(){
    double n1, n2, n3;

    std::cin >> n1 >> n2 >> n3;

    sort_three_numbers(n1, n2, n3);
    std::cout << n1 << " " << n2 << " " << n3 << std::endl;
}