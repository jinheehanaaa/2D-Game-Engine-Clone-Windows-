# Objective 
- Learn how to make game engine with C++, Lua, & SDL

# Technologies
- C++
- SDL for multi-platform (ex: opening the window, drawing image, etc)
- Lua for scripting language

# Branch
- [Setup completed for the first time](https://github.com/jinheehanaaa/2D-Game-Engine-with-CPP-LUA-and-SDL/tree/5679f7385963dd234a4953f9d47ce691cb4a083d)


# Setup procedure
- Create empty project with Visual Studio 2022
- Install dependencies (SDL, Lua, glm, & assets)
- Property Setup
- - Include Directories
- - - /lib
-  - - /lib/SDL2/include
- - Library Directories 
- - - /lib/SDL2/Lib/x64
- - - /lib/Lua
- - Linker input Additional Dependencies
- - - SDL2.lib
- - - SDL2main.lib
- - -  SDL2_image.lib
- - -  SDL2_ttf.lib
- - -  SDL2_mixer.lib
- - -  liblua53.a
- Pass parameters to main function
- - int argc => counter of arguments
- - char* argv[] => pointer to character array

# Tips
- used <code>$(SolutionDir)</code> for easy porting


# Resource for this project
- [SDL-Website](https://libsdl.org/)
- [SDL](https://github.com/libsdl-org/SDL/releases/)
- [SDL-Image](https://github.com/libsdl-org/SDL_image/releases)
- [SDL-ttf](https://www.libsdl.org/projects/SDL_ttf/release/)
- [SDL-mixer](https://github.com/libsdl-org/SDL_mixer/releases)
- [Lua-Binary](https://luabinaries.sourceforge.net/)

# Resources for other projects
- [Handmade Hero](https://www.youtube.com/@MollyRocket)
- [2D Game in Java](https://youtube.com/playlist?list=PL_QPQmz5C6WUF-pOQDsbsKbaBZqXj4qSq)