// topic 4 part 2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;
#define NUM_OF_PLAYERS 100

class player 
{
public:
    string name;
    int xposition;

    player() 
    {
        name = "placeholder";
        xposition = 0;
    }
};

class game 
{
public:
    float time_remaining;
    int current_level;
    int AI_difficulty;
    player players[NUM_OF_PLAYERS];
    
    game()
    {
        time_remaining = 60;
        current_level = 1;
        AI_difficulty = 1;
        for (int i = 0; i < NUM_OF_PLAYERS; i++) 
        {
            players[i].name = "placehodler";
            if (i < (NUM_OF_PLAYERS / 2))
            {
                players[i].xposition = -1;
            }
            else if (i >= (NUM_OF_PLAYERS / 2))
            {
                players[i].xposition = 1;
            }
            
        }
    }
};
int main()
{
    game game1;

    for (int a = 0; a < NUM_OF_PLAYERS; a++)
    {
        cout << a << game1.players[a].xposition << endl;
    }
}


