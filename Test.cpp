#include "doctest.h"
#include "sources/Game.hpp"
#include "sources/Team.hpp"
#include "sources/Leauge.hpp"
#include "sources/Schedule.hpp"
#include <string>
#include <vector>
#include <iostream>
#include <sstream>
using namespace std;

TEST_CASE("good"){
    vector<int> v (23, 14);
    for(auto element:v){
        CHECK(element == 14);
    }
}
