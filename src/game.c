#include <SDL3/SDL.h>
#include <SDL3/SDL_main.h>
#include "game.h"

bool running = false;
void pollEvents() {
    SDL_Event event;
    while (SDL_PollEvent(&event)) {
        if (event.type == SDL_EVENT_QUIT) {
            running = false;
        }

    }
}



int mainLoop(SDL_Renderer *renderer)
{
    pollEvents();

    SDL_SetRenderDrawColorFloat(renderer, 255, 255, 255, SDL_ALPHA_OPAQUE_FLOAT);  /* new color, full alpha. */

    /* clear the window to the draw color. */
    SDL_RenderClear(renderer);

    /* put the newly-cleared rendering on the screen. */
    SDL_RenderPresent(renderer);

    return 0;  /* carry on with the program! */
}

