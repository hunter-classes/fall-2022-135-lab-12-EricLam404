#include <iostream>
#include "optimism.h"
#include "fusion.h"

std::string toString(std::vector<int> vector){
    if(vector.size() == 0){
        return "[]";
    }
    std::string str = "[" + std::to_string(vector[0]);
    for(int i = 1; i < vector.size(); i++){
        str += ", " + std::to_string(vector[i]);
    }
    return str + "]";
}

int main(){

    std::cout << "\nTask B\n";
    std::vector<int> v{1,2,-1,3,4,-1,6};
    std::vector<int> positive = goodVibes(v);
    std::cout << toString(positive) << "\n";

    std::cout << "\nTask C\n";
    std::vector<int> v1{1,2,3};
    std::vector<int> v2{4,5};

    gogeta(v1, v2);

    std::cout << toString(v1) << "\n";
    std::cout << toString(v2) << "\n";

    return 0;
}