# Objective
- Image files 


# Learn
## Managing our Assets
- Use map with template to keep track of type & component
- - We might want to return a component based on type. (Ex: We want to have a sprite of component of certain entity)
- - Ex: TransformComponent is a key, Component is a value

## The Sprite Component

## Listing ALl Entities
### EntityManager
```cpp
void EntityManager::ListAllEntities() const {
    unsigned int i = 0;
    for (auto& entity: entities) {
        std::cout << "Entity[" << i << "]: " << entitiy->name << std::endl;
        entity->ListAllComponents( );
        i++;
    }
}

```

### Entity.cpp
```cpp
void Entity::ListAllComponents() const {
    for (auto mapElement: compoenetTypeMap) {
        std::cout << "  Component<" << mapElement.first->name() << ">" << std::endl
    }
}
```


## If our entity has a component of type T?
```cpp
class Entity {
    ...
    ...
    template <typename T>
    bool HasComponent() const {
        return componentTypeMap.count(&typeid(T));
    }
}
```
