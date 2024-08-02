#include <iostream>
#include <array>

const int ROW = 5;
const int COL = 5;

template <typename T, std::size_t Row, std::size_t Col>
using Array2d = std::array<std::array<T, Col>, Row>;

void draw_memory();
void load_map();
void update_memory();
void initialize_character(int,int);