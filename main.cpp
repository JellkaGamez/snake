#include <iostream>
#include <string>
#include <SDL3/SDL.h>

void main(){
    SDL_Window* window = SDL_CreateWindow("Snake Game", 640, 480, 0);
    SDL_SetWindowTitle(window, "Snake Game");
}