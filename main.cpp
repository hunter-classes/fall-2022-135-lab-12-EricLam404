#include <iostream>
#include "vectors.h"
#include "optimism.h"
#include "fusion.h"
#include "pairwise.h"

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
    std::cout << "\nTask A\n";
    std::vector<int> vector = makeVector(5);
    std::cout << toString(vector) << "\n";

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

    std::cout << "\nTask D\n";
    std::vector<int> v3{1,2,3};
    std::vector<int> v4{4,5};

    std::vector<int> sum = sumPairWise(v3, v4);
    std::cout << toString(sum) << "\n";


    return 0;
}