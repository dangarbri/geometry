#include <SDL/SDL.h>

class SDL_Bootstrap
{
 public:
  /**
   * Handle to the generated SDL Window
   */
  SDL_Window* window;

  /**
   * Surface for drawing on
   */
  SDL_Surface* surface;

  /**
   * Initialize SDL library
   *
   * @param[in] title Window title
   * @param[in] width Window width
   * @param[in] height Window height
   */
  void Initialize(const char* title, const int width, const int height);

  /**
   * Destroys the SDL instance. This will clean up the window and SDL Library.
   * You must clean up other resources yourself.
   */
  void Quit();
};
