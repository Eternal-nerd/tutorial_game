#include <iostream>
#include "Game.h"

int main()
{

    //init Game engine
    Game game;

    //Game loop
    while (game.running()) 
    {
    
        //Update
        game.update();


        //Render
        game.render();


    }

    //End of game
    return 0;
}