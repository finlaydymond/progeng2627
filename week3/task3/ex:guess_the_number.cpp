#include <iostream>
#include <string>
#include <vector>

int main(){
    int n, comp_guess = 50, low = 1, high = 100;
    std::string h_or_l;

    std::cout << "Pick a number between 1 and 100: ";
    std::cin >> n;

    while(n != comp_guess){
        std::cout << "is your number " << comp_guess << std::endl;
        std::cin >> h_or_l;
        if(h_or_l == "higher"){
            low =  comp_guess + ((comp_guess+1)/2);
        }
        else{
            high = (comp_guess+1)/2;
        }
        comp_guess = (low + high)/2;
    }
    std::cout << "Your number was " << comp_guess;
}