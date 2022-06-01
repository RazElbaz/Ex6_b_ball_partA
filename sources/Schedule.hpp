#include "Leauge.hpp"
#include "Game.hpp"
#include "vector"
#pragma once
namespace ariel{
    class Schedule{
    private:
        int Round;
        vector<Team> Tournament;
    public:
        Schedule(League &other);
        int getRound() const;
    };
}

