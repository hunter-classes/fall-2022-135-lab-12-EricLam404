#include <iostream>
#include "optimism.h"

std::string toString(std::vector<int> vector){
    std::string str = "[" + std::to_string(vector.at(0));
    for(int i = 1; i < vector.size(); i++){
        str += ", " + std::to_string(vector.at(i));
    }
    return str + "]";
}

int main(){

    std::vector<int> v{1,2,-1,3,4,-1,6};
    std::vector<int> positive = goodVibes(v);
    std::cout << toString(positive) << "\n";

    return 0;
}