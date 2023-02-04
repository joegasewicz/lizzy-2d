/**
 *  For testing only
 */
#include <iostream>

#include "Lizzy2D.h"

SDL_Window *g_pWindow = 0;
SDL_Renderer *g_pRenderer = 0;
bool g_bRunning = false;

Lizzy2D *g_game = 0;

int main(int argc, char* args[])
{
    g_game = new Lizzy2D();

    if (g_game->init("Lizzy", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 640, 480, false))
    {
        g_bRunning = true;
    }
    else
    {
        return 1;
    }

    while (g_game->running())
    {
        g_game->handleEvents();
        g_game->update();
        g_game->render();
    }
    g_game->clean();

    return 0;
}
