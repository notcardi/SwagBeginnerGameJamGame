#include <SDL3/SDL.h>
#include <SDL3/SDL_main.h>
#include "game.h"

static SDL_Window *window = NULL;
static SDL_Renderer *renderer = NULL;

/* This function runs once at startup. */

int main(void)
{
    SDL_SetAppMetadata("SDL3 Shennanigans", "1.0", "io.notcard.gamejamsubmission");

    if (!SDL_Init(SDL_INIT_VIDEO)) {
        SDL_Log("Couldn't initialize SDL: %s", SDL_GetError());
        return 1;
    }

    if (!SDL_CreateWindowAndRenderer("examples/renderer/clear", 640, 480, SDL_WINDOW_RESIZABLE, &window, &renderer)) {
        SDL_Log("Couldn't create window/renderer: %s", SDL_GetError());
        return 1;
    }
    SDL_SetRenderLogicalPresentation(renderer, 640, 480, SDL_LOGICAL_PRESENTATION_LETTERBOX);
    
    running = true;
    while (running) {
        mainLoop(renderer);
    };
    return 0;  /* carry on with the program! */
}




