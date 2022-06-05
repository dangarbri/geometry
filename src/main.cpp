#include "sdl_bootstrap.h"
#include <iostream>

const int SCREEN_WIDTH = 640;
const int SCREEN_HEIGHT = 480;

int main() {
  // Initialize SDL Library
  SDL_Bootstrap sdl;
  sdl.Initialize("Geometry", SCREEN_WIDTH, SCREEN_HEIGHT);

  if (sdl.window) {
    //Fill the surface white
    SDL_FillRect(sdl.surface, NULL, SDL_MapRGB(sdl.surface->format, 0xFF, 0xFF, 0xFF));
  
    //Update the surface
    SDL_UpdateWindowSurface(sdl.window);
  
    //Wait two seconds
    SDL_Delay(2000);
  } else {
    std::cerr << "Failed to initialize SDL" << std::endl;
  }

  sdl.Quit();
}
