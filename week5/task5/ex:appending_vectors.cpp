#include <iostream>
#include <vector>

void append_vectors(std::vector<int>& v1, std::vector<int>& v2, std::vector<int>& vout){
    
    for(int i = 0; i < v1.size(); i++){
        vout.push_back(v1[i]);
    }
    
    for(int i = 0; i < v2.size(); i++){
        vout.push_back(v2[i]);
    }

}

int main(){
    std::vector<int> v1 = {1, 3, 4, -7}, v2 = {2, 4, 11}, vout;

    append_vectors(v1, v2, vout);

    for(int i = 0; i < vout.size(); i++){
        std::cout << vout[i] << " ";
    }
}