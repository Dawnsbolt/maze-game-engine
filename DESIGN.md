# Command Line Interface Maze
## OBJECTIVE
Develop a CLI maze game with procedural generation.
### MILESTONES
1. Basic terminal drawing [Aug. 3, 2024]
2. Basic user input and wall collision [Aug.3, 2024]
3. Basic map-file reading
4. Win Condtion
5. Procedural Generation
## IMPLEMENTATION
****
**Initialization**  
1) Load map from file then initialize memory OR  
1a) Generate map  
**Loop**  
2) Draw map from memory; wait for user input.  
3) Handle user input  
a) check if destination tile is valid  
b) update memory // confirm win condition.  
### CLASSES  
`map memory` // game memory; drawn in game loop.
#### map  
*Walls* are represented by a '1' character.  
*Empty* spaces are represented by a '0' character.  
The *player* character is represented with 'C'.  
The *goal* is represented with 'V'.  
  
`<vector<vector<char>> tiles`  
 // contains horizontal vectors for the map.  
To get a tile at the coordinates (x,y) `tiles[y][x]`  
`char get(int x, int y) return tiles[y][x]` // Clear way to read tiles.  
`void set(int x, int y, char input) tiles[y][x]=input;` // Clear way to update tiles.  
`bool valid_space(int x, int y) return get(x,y)!='1';` // A Tile is considered valid if it is not set to a wall.  
  
`void draw_map()`  
 * Iterate through 2D arrays and write each character with `addch()` from curses  
 * Flush std::cout

#### character
`int pos_x`  
`int pos_y`  
`char prev_tile`  
  
`void attempt_movement(int x, int y)`  
 * `    if (memory.valid_space(x,y)`  
 * Update current position to `prev_tile`  
 * Store (x,y) into prev_tile  
 * Update (x,y) to 'C'  
