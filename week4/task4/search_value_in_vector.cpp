#include <iostream>
#include <vector>

int search_vector(int n, std::vector<double>& vin){
    int num_index = 0;

    for(int i = 0; i < vin.size(); i++){
        if(n == vin[i]){
            num_index = i;
            return num_index;
        }
    }
    return -1;
}

int main(){
    int n = 0;
    std::vector<double> list = {1, 2, 3, 4, 5};

    std::cin >> n;
    std::cout << "This number is at position " << search_vector(n, list) << std::endl;
}