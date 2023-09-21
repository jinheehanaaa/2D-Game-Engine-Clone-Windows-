#ifndef GAME_H
#define GAME_H

#include <SDL.h>
#include <SDL_image.h>
#include <SDL_ttf.h>
#include "./Entity.h"
#include "./Component.h"
#include "./EntityManager.h"
#include "AssetManager.h"

class Game {
private:
    bool isRunning;
    SDL_Window* window;
public:
    Game();
    ~Game();
    int ticksLastFrame = 0;
    bool IsRunning() const;
    static SDL_Renderer* renderer;
    static AssetManager* assetManager; 
    static SDL_Event event;
    void LoadLevel(int levelNumber);
    void Initialize(int width, int height);
    void ProcessInput();
    void Update();
    void Render();
    void Destroy();
};

#endif
