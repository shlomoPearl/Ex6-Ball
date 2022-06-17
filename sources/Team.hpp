#pragma once

#include <string>
#include <iostream>
using namespace std;
class Team{
    private:
        string name;
        int skill;
    public:
        Team(string, int);
        Team(Team);
};