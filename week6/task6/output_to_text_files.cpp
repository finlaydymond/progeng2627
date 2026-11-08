#include <iostream>
#include <fstream>
#include <cstdlib>

int main(){
    std::ofstream outfile;
    outfile.open("output.txt");

    if(!outfile.is_open()){
        std::cout << "error loading " <<std::endl;
        return EXIT_FAILURE;
    }

    outfile << "Hello" << std::endl;

    outfile.close();
}