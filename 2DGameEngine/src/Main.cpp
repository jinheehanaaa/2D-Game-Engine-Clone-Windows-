#include <iostream>
#include <SDL.h>
#include <SDL_image.h>
#include <SDL_ttf.h>
#include <SDL_mixer.h>
#include <glm/glm.hpp>
#include <lua/sol.hpp>
#include <lua/sol.hpp>

// $(SolutionDir)
int main(int argc, char* args[]) {
	sol::state lua;
	lua.open_libraries(sol::lib::base);
	glm::vec2 velocity = glm::vec2(2.0, -1.0);

	SDL_Init(SDL_INIT_EVERYTHING);
	std::cout << "Hello" << std::endl;
	return 0;
}
