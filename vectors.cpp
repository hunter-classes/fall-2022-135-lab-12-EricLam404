#include <iostream>
#include <vector>
#include "vectors.h"

std::vector<int> makeVector(int n){
    std::vector<int> vector;
    for(int i = 0; i < n; i++){
        vector.push_back(i);
    }
    return vector;
}