#include <iostream>
#include <vector>

/*
int main(){
    std::vector<int> v; //create the vector

    v.push_back(10); //append 10 to vector

    v.push_back(20);

    std::cout << v[0] << " " << v[1] << std::endl;

    v[0] = 15;

    std::cout << v[0] << " " << v[1] << std::endl;

    v.push_back(30);

    std::cout << v.size() << std::endl;

}
*/

/*
int main(){

    std::vector<int> sequence;
    int temp = 1;
    
    std::cout << "Enter numbers: " << std::endl;

    std::cin >> temp;

    while(temp!=0){
        sequence.push_back(temp);
        std::cin >> temp;
    }

    for(int i = 0; i < sequence.size(); i++){
        std::cout << sequence[i];
    }

    std::cout << std::endl;

    for(int i = sequence.size() - 1; i >= 0; i--){
        std::cout << sequence[i];
    }
    
}
*/

int main(){
    std::vector<int> v; 

    v.push_back(10);
    v.push_back(20);

    std::cout << v.at(0) << std::endl;

    std::cout << v.at(1) << std::endl;

    std::cout << v.at(4) << std::endl;

}