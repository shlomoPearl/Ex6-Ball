#pragma once

#include "Team.hpp"
#include <string>
#include <iostream>
using namespace std;

class Game{
    private:
        const Team& in;
        const Team& out;
        int score_in;
        int score_out;
        string lead_team;
    public:
        Game(const Team&, const Team&);
        Game(const Game&);
        string win();
};