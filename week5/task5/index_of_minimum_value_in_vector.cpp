#include <iostream>
#include <vector>

int min_vector_element(const std::vector<double> vin){
    double smallest = vin[0];
    int smallest_index = 0;

    if(vin.size() == 0){
        return -1;
    }
    else{
        for(int i = 0; i < vin.size(); i++){
            if(vin[i] < smallest){
                smallest = vin[i];
                smallest_index = i;
            }
        }
        return smallest_index;
    }
}

int main(){
    std::vector<double> list = {5, 10, 3, 2, 1};

    std::cout << "The index of the smallest value in the list is " << min_vector_element(list) << std::endl;
}