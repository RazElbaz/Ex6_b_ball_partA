#include "Team.hpp"
namespace ariel{
    class Game{
    private:
        Team In, Out;
        int In_score, Out_score;

    public:
        Game(Team &in, Team &out);
        void GameResult();
        Team &Win();
        void setIn_score(int in);
        void setOut_score(int out);
    };
}