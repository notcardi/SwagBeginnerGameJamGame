#ifndef GAME_H
#define GAME_H


void pollEvents();
int mainLoop(SDL_Renderer *renderer);
extern bool running;
#endif