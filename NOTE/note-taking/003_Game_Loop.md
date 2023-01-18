# Objective
- Game Loop



# Learn

<!--Start Accordion -->
<details>
  <summary>Titile</summary>

# Subtitle

</details>
<!--End Accordion -->

<!--Start Accordion -->
<details>
  <summary>Game Loop</summary>

# Objective 
- What is Game Loop
- 3.14

# What is a game loop
- Game Loop is Infinite Loop (usually target as 60 Frame Per Second)
- - Process Input
- - Update Game
- - Render
- ![Gmae Loop](../images/002_What_is_a_game_loop.jpg)

# Tips
- Game class is respnsible for game loop 
- Use double buffering for rendering process

# Code
- Initialize(){} => Window, Renderer from SDL

# SDL Functions
- SDL_CreateWindow(title, x, y, width, height, flag for some style)
- SDL_CreateRenderer(window, index of monitor, 0) 
- - -1 = default
- - 0 = nothing
- SDL_RenderClear for buffering renderer with front/back buffer
</details>
<!--End Accordion -->

<!--Start Accordion -->
<details>
  <summary>Intro to Memory Allocation</summary>

# Objective
- Heap & Stack
- 3.15, 3.16

# Heap
- new keyword is for heap allocation => ex: <code>Game *game = new Game();</code>
- Need to use pointer with heap if you want to use bigger object for much more memory.
- you need to deallocate the memory for heap => ex: <code>delete game;</code>

# Stack
- Limited memory usage from OS, usually few MBs => Ex: <code>Game game;</code>)
- Access with "." => Ex: <code>game.Initialize(WINDOW_WIDTH, WINDOW_HEIGHT);</code>
- Don't have to deallocate the object

</details>
<!--End Accordion -->


<!--Start Accordion -->
<details>
  <summary>Detail about Stack & Heap</summary>

# Stack
- In the stack, the allocation happens on contiguous blocks of memory
- The size of memory to be allocated is known to the compiler
- The stack has a fixed size (OS-dependent)
- We don't have to worry about memory allocation/deallocation of stack variables
 
 ## Code Example
```cpp
void SomeFunction() {
    // Creates an object in the stack
    Enemy enemy;

    enemy.Jump();
    enemy.Run(20);
    enemy.LookLeft();
} // Scope ends, object is automatically destroyed
```

# Heap
- In the heap, memory is allocated dynamically and it's usually not contiguous
- The heap has no fixed-size restrictions, but heap handling is slower than stack handling
- The programmer is responsible for remembering to deallocate the object in memory

## Code Example
```cpp
void SomeFunction() {
    // Creates an object in the heap using the "new" keyword
    Enemy* enemy = new Enemy();

    enemy->Jump();
    enemy->Run(20);
    enemy->LookLeft();

    // We need to explicitly "delete" the object
    delete enemy;
} 
```


</details>
<!--End Accordion -->










