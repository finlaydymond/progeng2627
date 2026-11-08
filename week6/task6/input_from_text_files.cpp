#include <iostream>
#include <fstream>

/*
int main(){
    std::ifstream infile;

    infile.open("input.txt");

    if(infile.is_open()){
        int tmp;
        infile >> tmp;
        std::cout << tmp << std::endl;
        infile >> tmp;
        std::cout << tmp << std::endl;
        infile >> tmp;
        std::cout << tmp << std::endl;
        infile >> tmp;
        std::cout << tmp << std::endl;
        infile.close();
    }
    else{
        std::cout << "File was not opened." << std::endl;
    }
}
*/

/*
//looping through and printing everything in a text file
int main(){
    std::ifstream infile;
    infile.open("input.txt");

    if(infile.is_open()){
        int n;

        while(infile >> n){
            std::cout << n << std::endl;
        }
        infile.close();
    }
}
*/

#include <cstdlib>
// cstdlib header needed for EXIT_FAILURE

int main(){
    std::ifstream infile; 
    infile.open("input.txt");

    if(!infile.is_open()){ // note the !: "if the file is not open"...
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
        // ...after we print an error message
        // we use the return to terminate function main
        // with code EXIT_FAILURE that represents something going wrong

    }

    // if the return is executed above (because the program enters the if)
    // then the following lines are not executed

    // the following lines are the same as in the corresponding example above

    int tmp;

    while(infile >> tmp){
        std::cout << tmp << std::endl;
    }

    infile.close();
}


