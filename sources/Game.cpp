#include "Game.hpp"

using namespace ariel;
Game::Game(Team &in, Team &out): In(in), Out(out) ,Out_score(0),In_score(0){}
void Game::GameResult() {}
Team& Game::Win() {
    if(In_score<=0 || Out_score<=0){throw ("There is no winner yet");}
    return In ;}
void Game::setIn_score(int in) { this->In_score=in;}
void Game::setOut_score(int out) {this->Out_score=out;}