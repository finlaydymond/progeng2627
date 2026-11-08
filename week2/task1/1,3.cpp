#include <iostream>
#include <string>
// this includes the header for text variables

int main(){

    std::string user_name;

    std::cout << "what is your name?" << std::endl;
    std::cin >> user_name;
    std::cout << "Hello" << user_name << std::endl;
}
