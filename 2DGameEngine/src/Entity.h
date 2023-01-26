
#ifndef ENTITY_H
#define ENTITY_H

class Component;
class EntityManager;

#include <vector>
#include <string>
class Entity {
private:
	EntityManager& manager;
	bool isActive;
	std::vector<Component*> components;
public:
	std::string name;
	Entity(EntityManager& manager);
	Entity(EntityManager& manager, std::string name);
	void Update(float deltaTime);
	void Render();
	void Destroy();
	bool IsActive() const;

};
#endif