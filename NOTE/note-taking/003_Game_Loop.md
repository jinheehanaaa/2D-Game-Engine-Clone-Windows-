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
- 3.15

# Heap
- new keyword is for heap allocation <code>Game *game = new Game();</code>
- Need to use pointer with heap if you want to use bigger object for much more memory.
- you need to deallocate the memory for heap <code>delete game;</code>

# Stack
- Limited memory usage from OS, usually few MBs => (Ex: <code>Game game;</code>)
- Access with "." => (Ex: <code>game.Initialize(WINDOW_WIDTH, WINDOW_HEIGHT);</code>)
- Don't have to deallocate the object

</details>
<!--End Accordion -->






