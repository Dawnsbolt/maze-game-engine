#include "main.h"
Array2d<char,ROW,COL> map;
Array2d<char,ROW,COL> memory;
int pos_x, pos_y;

int main() {
    initialize_character(1,2);
    load_map();
    update_memory();
    draw_memory();
    return 0;
}

void load_map() {
    map = {{
                            {'1','1','1','1','1'},
                            {'1','0','0','0','1'},
                            {'1','0','1','0','1'},
                            {'1','0','0','0','1'},
                            {'1','1','1','1','1'}
    }};
}

void draw_memory() {
    for (int i = 0; i < ROW; i++) {
        for (int j = 0; j < COL; j++) {
            std::cout << memory[i][j];
        }
        std::cout << '\n';
    }
}

void update_memory() {
    memory = map;
    memory[pos_x][pos_y] = 'C';
}

void initialize_character(int x, int y) {
    pos_x = x;
    pos_y = y;
}