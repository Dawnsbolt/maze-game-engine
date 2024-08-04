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
#### map  
`<vector<vector<char>>` **tiles**  
 // contains horizontal vectors for the map.  
tile[y][x]