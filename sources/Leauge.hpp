#pragma once

#include "Team.hpp"
#include <string>
#include <iostream>
#include <vector>
using namespace std;
const int NUMBERS_OF_TEAMS = 20;
class Leauge{
    private:
        vector<const Team*> teams;
    public:
        Leauge() : teams(NUMBERS_OF_TEAMS){};
        Leauge(vector<const Team*>);
        // Leauge();

};