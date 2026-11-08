#include <iostream>
#include <vector>

std::vector<int> list_less_than_t(std::vector<int> n, int t){
    std::vector<int> new_list;

    for(int i = 0; i < n.size(); i++){
        if(n[i] < t){
            new_list.push_back(n[i]);
        }
    }

    return new_list;
}

int main(){
    std::vector<int> list;
    int n = 0, temp, t = 0;

    std::cin >> n;

    for(int i = 0; i < n; i++){
        std::cin >> temp;
        list.push_back(temp);
    }

    std::cin >> t;

    std::vector<int> new_list = list_less_than_t(list, t);

    for(int i = 0; i < new_list.size(); i++){
        std::cout << new_list[i] << " ";
    }

}