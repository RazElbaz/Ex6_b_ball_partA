#include "Schedule.hpp"

namespace ariel {
    Schedule::Schedule(League &other):Round(1) {}
    int Schedule::getRound() const { return this->Round; }
};

