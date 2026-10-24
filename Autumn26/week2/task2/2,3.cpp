#include <iostream>
#include <string>

int main(){
    double length_in, length_out;
    std::string unit_in, unit_out;
    std::cin >> length_in >> unit_in;

    const double mile_to_km = 1.609;

    if(unit_in == "mile"){
        unit_out = "km";
        std::cout << length_in * mile_to_km << " " << unit_out << "s" << std::endl;
    }
    else{
        unit_out = "mile";
        std::cout << length_in/mile_to_km << " " << unit_out << "s" << std::endl;
    }
}