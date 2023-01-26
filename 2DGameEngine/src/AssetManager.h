#include <map>
#include <string>
#include <SDL.h>
#include "EntityManager.h"
#include "TextureManager.h"

#ifndef ASSETMANAGER_H
#define ASSETMANAGER_H


class AssetManager {
private:
	EntityManager* manager;
	std::map<std::string, SDL_Texture*> textures;
public:
	AssetManager(EntityManager* manager);
	~AssetManager();
	void ClearData();
	void AddTexture(std::string textureId, const char* filePath);
	SDL_Texture* GetTexture(std::string textureId);
};

#endif