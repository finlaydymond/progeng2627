#include <iostream>
#include <string>

void swap_text(std::string& s1, std::string& s2){
    std::string temp;
    temp = s1;
    s1 = s2;
    s2 = temp;
}

int main(){
    std::string s1, s2;

    std::cout << "please enter two values" << std::endl;
    std::cin >> s1 >> s2;

    std::cout << "you entered:" << std::endl;
    std::cout << "s1: " << s1 << std::endl;
    std::cout << "s2: " << s2 << std::endl;

    swap_text(s1, s2);
    // here a becomes another name for n1
    // while b becomes another name for n2

    // it's just about the position/order in the parentheses:
    // n1 is passed to the first parameter (a)
    // n2 is passed to the second parameter (b)

    std::cout << "after swapping the values:" << std::endl;
    std::cout << "s1: " << s1 << std::endl;
    std::cout << "s2: " << s2 << std::endl;
}
