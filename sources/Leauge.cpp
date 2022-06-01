#include "Leauge.hpp"
using namespace ariel;
League::League() {}
League::League(vector<Team>& given_teams) {
    if (given_teams.size() == GroupSize_max) {
        cout<<"";
    }
    if(given_teams.size() < GroupSize_max){
        cout<<"";
    }
    if(given_teams.size() > GroupSize_max){
        throw "Team size in the league is a maximum of 20";
    }
}
string League:: RandomString(int n) { return "";}
Team League::CreateRandomTeam() {
    string null="null";
    return {null, 0.0};}
vector <Team> &League::getTeams() { return this->Teams;}
