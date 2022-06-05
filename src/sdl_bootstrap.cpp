#include "sdl_bootstrap.h"
#include <iostream>

void SDL_Bootstrap::Initialize(const char* title, const int width, const int height) {
#ifdef VERBOSE
  std::cout << "Initializing SDL Library." << std::endl;
#endif

  if( SDL_Init( SDL_INIT_VIDEO ) < 0 )
  {
    std::cerr << "SDL could not initialize! SDL_Error: " << SDL_GetError() << std::endl;
    return;
  }

#ifdef VERBOSE
  std::cout << "Creating the window." << std::endl;
#endif

  window = SDL_CreateWindow(title, SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, width, height, SDL_WINDOW_SHOWN);
  if( window == NULL )
  {
    std::cerr << "Window could not be created! SDL_Error: " << SDL_GetError() << std::endl;
    return;
  }

  surface = SDL_GetWindowSurface(window);
}

void SDL_Bootstrap::Quit() {
  SDL_DestroyWindow(window);
  SDL_Quit();
}
