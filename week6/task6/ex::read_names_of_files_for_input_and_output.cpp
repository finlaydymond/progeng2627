#include <iostream>
#include <fstream>
#include <cstdlib>
#include <vector>
#include <string>

int main(){
    std::ifstream infile;
    std::ofstream outfile;
    std::string in;
    std::string out;

    std::cin >> in >> out;

    infile.open(in);
    outfile.open(out);
    std::vector<int> v;

    if(!infile.is_open() || !infile.is_open()){
        std::cout << "error loading files" << std::endl;
        return EXIT_FAILURE;
    }

    int x;

    while(infile >> x){
        v.push_back(x);
    }

    for(int i = v.size()-1; i >= 0; i--){
        outfile << v[i] <<std::endl;
    }

}