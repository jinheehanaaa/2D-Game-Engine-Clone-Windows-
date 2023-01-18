# Objective
- Learn how to setup project
- This is not a How-To-Do Instruction (It is for reference purposes)

# Tip
- For Windows User:
- Importing dependencies might be complicated for Windows User
- Must rely on Visual Studio 2022 IDE for this project
- use <code>$(SolutionDir)</code> for easy porting
- For Linux or iOS User:
- You can use whatever IDE you want, but I do not use Linux or iOS.

# Setup procedure (This might helpful if you want to create similar project)
- Create empty project with Visual Studio 2022
- Install dependencies (SDL, Lua, glm, & assets)
- Property Setup from Visual Studio 2022
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
