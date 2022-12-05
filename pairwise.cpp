#include <iostream>
#include <vector>
#include "pairwise.h"


std::vector<int> sumPairWise(const std::vector<int> &v1, const std::vector<int> &v2){
    int smallest = v1.size() < v2.size() ? v1.size() : v2.size();
    std::vector<int> v;
    for(int i = 0; i < smallest; i++){
        v.push_back(v1[i] + v2[i]);
    }
    if(v1.size() > v2.size())
        for(int i = smallest; i< v1.size(); i++) v.push_back(v1[i]);
    else if(v2.size() > v1.size())
        for(int i = smallest; i< v2.size(); i++) v.push_back(v2[i]);

    return v;
}