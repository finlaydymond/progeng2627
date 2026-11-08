#include <iostream>
#include <fstream>

int main(){
    std::ifstream infile;
    infile.open("input.txt");
    
    double sum = 0;
    int n;
    while(infile >> n){
        sum += n;
    }
    infile.close();

    std::cout << sum << std::endl;
}