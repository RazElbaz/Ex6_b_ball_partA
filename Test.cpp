#include "doctest.h"
#include "iostream"
#include "vector"
#include "sources/Schedule.hpp"
#include "sources/Team.hpp"

using namespace ariel;
using namespace std;
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
TEST_CASE ("The property of a vector is greater than 20 ") {
    vector<Team> teams;
    string one = "a";
    Team a{one, 0.1};
    teams.push_back(a);
    string two = "b";
    Team b{two, 0.15};
    teams.push_back(b);
    string three = "c";
    Team c{three, 0.12};
    teams.push_back(c);
    string four = "d";
    Team d{four, 0.21};
    teams.push_back(d);
    string five = "e";
    Team e{five, 0.14};
    teams.push_back(e);
    string six6 = "f";
    Team f{six6, 0.51};
    teams.push_back(f);
    string seven = "g";
    Team g{seven, 0.61};
    teams.push_back(g);
    string eight = "h";
    Team h{eight, 0.11};
    teams.push_back(h);
    string nine = "i";
    Team i{nine, 0.14};
    teams.push_back(i);
    string ten = "j";
    Team j{ten, 0.21};
    teams.push_back(j);

    string eleven = "k";
    Team k{eleven, 0.22};
    teams.push_back(k);
    string twelve = "l";
    Team l{twelve, 0.24};
    teams.push_back(l);
    string thirteen = "m";
    Team m{thirteen, 0.35};
    teams.push_back(m);
    string fourteen = "n";
    Team n{fourteen, 0.55};
    teams.push_back(n);
    string fifteen = "o";
    Team o{fifteen, 0.84};
    teams.push_back(o);
    string sixteen = "p";
    Team p{sixteen, 0.1};
    teams.push_back(p);
    string seventeen = "q";
    Team q{seventeen, 0.3};
    teams.push_back(q);
    string eighteen = "r";
    Team r{eighteen, 0.2};
    teams.push_back(r);
    string nineteen = "s";
    Team s{nineteen, 0.5};
    teams.push_back(s);
    string twenty = "t";
    Team t{twenty, 0.4};
    teams.push_back(t);

    string twenty_one = "u";
    Team u{twenty_one, 0.4};
    teams.push_back(u);

    CHECK_THROWS(League tournament_full{teams});
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

TEST_CASE("A group with an illegal talent level-> higher than 1"){
    string one = "a";
    CHECK_THROWS(Team a(one, 1.1));
    string two = "b";
    CHECK_THROWS(Team b(two, 1.15));
    string three = "c";
    CHECK_THROWS(Team c(three, 1.9));
    string four = "d";
    CHECK_THROWS(Team d(four, 1.001));
    string five = "e";
    CHECK_THROWS(Team (five, 2));
    string six = "f";
    CHECK_THROWS(Team f(six, 10));
    string seven = "g";
    CHECK_THROWS(Team (seven, 100000));
    string eight = "h";
    CHECK_THROWS(Team f(eight, 1.01));
}
TEST_CASE("A group with an illegal talent level-> less than 0"){
    string one = "a";
    CHECK_THROWS(Team a(one, -0.1));
    string two = "b";
    CHECK_THROWS(Team b(two, -0.15));
    string three = "c";
    CHECK_THROWS(Team c(three, -0.9));
    string four = "d";
    CHECK_THROWS(Team d(four, -0.001));
    string five = "e";
    CHECK_THROWS(Team (five, -2));
    string six = "f";
    CHECK_THROWS(Team f(six, -10));
    string seven = "g";
    CHECK_THROWS(Team (seven, -100000));
    string eight = "h";
    CHECK_THROWS(Team f(eight, -0.01));
}
TEST_CASE("check the win function, **illegal talent level**"){
    string one = "a";
    Team a{one, 0.1};
    string two = "b";
    Team b{two, 0.15};
    Game game{a,b};
    CHECK_THROWS(game.Win());
    CHECK_NOTHROW(game.GameResult());
    game.setIn_score(-10);
    CHECK_THROWS(game.Win());
    game.setOut_score(-10);
    CHECK_THROWS(game.Win());

    string one2 = "a";
    Team a2{one2, 0.1};
    string two2 = "b";
    Team b2{two2, 0.15};
    Game game2{a2,b2};
    CHECK_THROWS(game2.Win());
    CHECK_NOTHROW(game2.GameResult());
    game2.setIn_score(-1);
    CHECK_THROWS(game2.Win());
    game2.setOut_score(1);
    CHECK_THROWS(game2.Win());

    string one3 = "a";
    Team a3{one3, 0.1};
    string two3 = "b";
    Team b3{two3, 0.15};
    Game game3{a3,b3};
    CHECK_THROWS(game3.Win());
    CHECK_NOTHROW(game3.GameResult());
    game3.setIn_score(0);
    CHECK_THROWS(game3.Win());
    game3.setOut_score(0);
    CHECK_THROWS(game3.Win());
}
/////////////////////////////////////////////Empty constructor tests////////////////////////////////////////////////////
League tournament{};

TEST_CASE ("Create random groups with an empty constructor and print for checking") {
    cout << "test 1" << endl;
    size_t i = 1;
    for (auto &t: tournament.getTeams()) {
        cout << "------------------------------------------" << endl;
        cout << "Team number: " << i++ << endl;
        cout << "Name: " << t.name() << " | Talent Level: " << t.talentLevel() << endl;
    }

}

TEST_CASE ("Checking the schedule->if printing good") {
    CHECK_NOTHROW(Schedule schedule{tournament});
}

////////////////////////////////A constructor that receives an external set of 20 sets//////////////////////////////////

TEST_CASE ("Test of a constructor with 20 sets ") {
    vector<Team> teams;
    string one = "a";
    Team a{one, 0.1};
    teams.push_back(a);
    string two = "b";
    Team b{two, 0.15};
    teams.push_back(b);
    string three = "c";
    Team c{three, 0.12};
    teams.push_back(c);
    string four = "d";
    Team d{four, 0.21};
    teams.push_back(d);
    string five = "e";
    Team e{five, 0.14};
    teams.push_back(e);
    string six6 = "f";
    Team f{six6, 0.51};
    teams.push_back(f);
    string seven = "g";
    Team g{seven, 0.61};
    teams.push_back(g);
    string eight = "h";
    Team h{eight, 0.11};
    teams.push_back(h);
    string nine = "i";
    Team i{nine, 0.14};
    teams.push_back(i);
    string ten = "j";
    Team j{ten, 0.21};
    teams.push_back(j);

    string eleven = "k";
    Team k{eleven, 0.22};
    teams.push_back(k);
    string twelve = "l";
    Team l{twelve, 0.24};
    teams.push_back(l);
    string thirteen = "m";
    Team m{thirteen, 0.35};
    teams.push_back(m);
    string fourteen = "n";
    Team n{fourteen, 0.55};
    teams.push_back(n);
    string fifteen = "o";
    Team o{fifteen, 0.84};
    teams.push_back(o);
    string sixteen = "p";
    Team p{sixteen, 0.1};
    teams.push_back(p);
    string seventeen = "q";
    Team q{seventeen, 0.3};
    teams.push_back(q);
    string eighteen = "r";
    Team r{eighteen, 0.2};
    teams.push_back(r);
    string nineteen = "s";
    Team s{nineteen, 0.5};
    teams.push_back(s);
    string twenty = "t";
    Team t{twenty, 0.4};
    teams.push_back(t);
    League tournament_full{teams};

    cout << "test 2" << endl;
    size_t w = 1;
    for (auto &t: tournament_full.getTeams()) {
        cout << "------------------------------------------" << endl;
        cout << "Team number: " << w++ << endl;
        cout << "Name: " << t.name() << " | Talent Level: " << t.talentLevel() << endl;
    }
    CHECK_NOTHROW(Schedule schedule{tournament_full});
}
//////////////////////////A constructor that receives an external set of * less * than 20 sets//////////////////////////

TEST_CASE ("Test of a constructor with less than 20 sets ") {
    vector<Team> teams;
    string one = "a";
    Team a{one, 0.1};
    teams.push_back(a);
    string two = "b";
    Team b{two, 0.15};
    teams.push_back(b);
    string three = "c";
    Team c{three, 0.12};
    teams.push_back(c);
    string four = "d";
    Team d{four, 0.21};
    teams.push_back(d);
    string five = "e";
    Team e{five, 0.14};
    teams.push_back(e);
    string six6 = "f";
    Team f{six6, 0.51};
    teams.push_back(f);
    string seven = "g";
    Team g{seven, 0.61};
    teams.push_back(g);
    string eight = "h";
    Team h{eight, 0.11};
    teams.push_back(h);
    string nine = "i";
    Team i{nine, 0.14};
    teams.push_back(i);
    string ten = "j";
    Team j{ten, 0.21};
    teams.push_back(j);

    League tournament_full{teams};
    cout << "test 3" << endl;
    size_t w = 1;
    for (auto &t: tournament_full.getTeams()) {
        cout << "------------------------------------------" << endl;
        cout << "Team number: " << w++ << endl;
        cout << "Name: " << t.name() << " | Talent Level: " << t.talentLevel() << endl;
    }
    CHECK_NOTHROW(Schedule schedule{tournament_full});
}
