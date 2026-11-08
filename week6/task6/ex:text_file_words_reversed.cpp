#include <iostream>
#include <fstream>
#include <cstdlib>
#include <vector>
#include <string>

int main(){
    std::ifstream infile;
    infile.open("input_text.txt");

    std::vector<std::string> list;

    if(!infile.is_open()){
        std::cout << "error opening file." << std::endl;
        return EXIT_FAILURE;
    }

    std::string n;

    while(infile >> n){
        list.push_back(n);
    }

    for(int i = list.size()-1; i >= 0; i--){
        std::cout << list[i] << " ";
    }
}