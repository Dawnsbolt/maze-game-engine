#include "main.h"

Array2d<char,ROW,COL> map;
Array2d<char,ROW,COL> memory;
int pos_x, pos_y;

int main() {
    initscr();
    cbreak();
    noecho();

    initialize_character(1,2);
    load_map();
    update_memory();
    draw_memory();
    std::cout.flush();
    int c = 0;
    while (1) {
        c = 0;
        switch((c = getch())) {
            case 65:
                std::cout << "Up"; // key up
                break;
            case 66:
                std::cout << "Down"; // key down
                break;
            case 67:
                std::cout << "Right"; // key right
                break;
            case 68:
                std::cout << "Left"; // key left
                break;
            default:
                break;
        }
        std::cout.flush();
    }
    endwin();
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
            addch(memory[i][j]);
        }
        addch('\n');
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