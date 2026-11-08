#include <iostream>
#include <vector>

/*
// maybe not the most efficient way:
std::vector<int> from_1_to_n(int n){

    std::vector<int> vout;

    for(int i = 0; i < n; i++){
        vout.push_back(i+1);
    }

    return vout;

}

int main(){
    std::vector<int> v;

    v = from_1_to_n(5);

    for(int i = 0; i < v.size(); i++){
        std::cout << v[i] << std::endl;
    }

}
*/

/*
void from_1_to_n(int n, std::vector<int>& vout){

    for(int i = 0; i < n; i++){
        vout.push_back(i+1);
    }

}

int main(){
    std::vector<int> v;

    from_1_to_n(5, v);

    for(int i = 0; i < v.size(); i++){
        std::cout << v[i] << std::endl;
    }

}
*/

/*
void from_1_to_n(int n, std::vector<int>& vout){

    for(int i = 0; i < n; i++){
        vout.push_back(i+1);
    }

}

int main(){
    // this program will not work as expected...
    std::vector<int> v;

    for(int n = 3; n < 7; n++){
        from_1_to_n(n, v);

        std::cout << "printing vector:" << std::endl;
        for(int i = 0; i < v.size(); i++){
            std::cout << v[i] << std::endl;
        }
    }
}
*/

void from_1_to_n(int n, std::vector<int>& vout){

    for(int i = 0; i < n; i++){
        vout.push_back(i+1);
    }

}

int main(){
    std::vector<int> v;
    for(int n = 3; n < 7; n++){

        v.clear();
        from_1_to_n(n, v);

        std::cout << "printing vector:" << std::endl;
        for(int i = 0; i < v.size(); i++){
            std::cout << v[i] << std::endl;
        }
    }
}