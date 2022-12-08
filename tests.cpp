#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "vectors.h"
#include "optimism.h"
#include "fusion.h"
#include "pairwise.h"

bool compareVectors(std::vector<int> v1, std::vector<int> v2){
    for(int i = 0; i < v1.size(); i++){
        if(v1[i] != v2[i])
            return false;
    }
    return true;
}

TEST_CASE("Task A"){
    std::vector<int> v = makeVector(5);
    std::vector<int> ans{0, 1, 2, 3, 4};
    CHECK(compareVectors(v, ans));
}

TEST_CASE("Task B"){
    std::vector<int> v{1,2,-1,3,4,-1,6};
    std::vector<int> positive = goodVibes(v);
    std::vector<int> ans{1, 2, 3, 4, 6};
    CHECK(compareVectors(positive, ans));
}

TEST_CASE("Task C"){
    std::vector<int> v1{1,2,3};
    std::vector<int> v2{4,5};
    gogeta(v1, v2);

    std::vector<int> ans{1, 2, 3, 4, 5};
    CHECK((compareVectors(v1, ans) && v2.empty()));
}

TEST_CASE("Task D"){
    std::vector<int> v3{1,2,3};
    std::vector<int> v4{4,5};
    std::vector<int> sum = sumPairWise(v3, v4);

    std::vector<int> ans{5, 7, 3};
    CHECK(compareVectors(sum, ans));
}
