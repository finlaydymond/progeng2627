#include <iostream>

void area_perimeter(double width, double length, double& perimeter, double&area){
    perimeter = width*2 + length*2;
    area = width*length;
}

int main(){
    double s1, s2, area, perimeter;

    std::cin >> s1 >> s2;

    area_perimeter(s1, s2, area, perimeter);
    std::cout << "area: " << area << " " << "perimeter: " << perimeter << std::endl;

}