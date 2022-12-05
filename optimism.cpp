#include <iostream>
#include <vector>
#include "optimism.h"

std::vector<int> goodVibes(const std::vector<int>& v){
    std::vector<int> positive;
    for(int i = 0; i < v.size(); i++){
        if(v[i] >= 0){
            positive.push_back(v[i]);
        }
    }

    return positive;
}