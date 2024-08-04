#include <curses.h>
#include <iostream>
#include <array>
#include<unistd.h> 

const int ROW = 5;
const int COL = 5;

template <typename T, std::size_t Row, std::size_t Col>
using Array2d = std::array<std::array<T, Col>, Row>;

void draw_memory();
void load_map();
void initialize_memory();
void initialize_character(int,int);
void handle_input();
bool valid_tile(int,int);
void move_character(int,int);