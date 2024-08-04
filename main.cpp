#include "main.h"
#include "loader.h"

Array2d<char,ROW,COL> map;
Array2d<char,ROW,COL> memory;
int pos_x, pos_y;

int main() {
    // Initialize curses library
    initscr();
    cbreak();
    noecho();
    // Initialize map and character placement
    initialize_character(1,3);
    load_map();
    initialize_memory();
    // Game Loop
    while (1) {
        clear();
        draw_memory();
        handle_input();
    }
    endwin();
    return 0;
}

void load_map() {
    map = {{
                            {'1','1','1','1','1'}, //0
                            {'1','0','0','0','1'}, //1
                            {'1','0','1','0','1'}, //2
                            {'1','0','0','0','1'}, //3
                            {'1','1','1','1','1'}  //4
    }};
}

void draw_memory() {
    for (int i = 0; i < ROW; i++) {
        for (int j = 0; j < COL; j++) {
            addch(memory[i][j]);
        }
        addch('\n');
    }
}

void initialize_memory() {
    memory = map;
    memory[pos_y][pos_x] = 'C';
}

void initialize_character(int x, int y) {
    pos_x = x;
    pos_y = y;
}

void handle_input() {
        int c = 0;
        switch((c = getch())) {
            case 65: // key up
                if (valid_tile(pos_x, pos_y-1)) {
                    move_character(pos_x, pos_y-1);
                }
                break;
            case 66: // key down
                 if (valid_tile(pos_x, pos_y+1)) {
                    move_character(pos_x, pos_y+1);
                }
                break;
            case 67: // key right
                if (valid_tile(pos_x+1, pos_y)) {
                    move_character(pos_x+1, pos_y);
                }
                break;
            case 68: // key left
                if (valid_tile(pos_x-1, pos_y)) {
                    move_character(pos_x-1, pos_y);
                }
                break;
            default:
                break;
        }
}

bool valid_tile(int x, int y) {
    return memory[y][x] != '1';
}

void move_character(int x, int y) {
    memory[pos_y][pos_x] = '0';
    pos_x = x;
    pos_y = y;
    memory[pos_y][pos_x] = 'C';
}