#include "main.h"
Array2d<int,ROW,COL> map;

int main() {
    load_map();
    draw_map();
    return 0;
}

void load_map() {
    map = {{
                            {1,1,1,1,1},
                            {1,0,0,0,1},
                            {1,0,1,0,1},
                            {1,0,0,0,1},
                            {1,1,1,1,1}
    }};
}

void draw_map() {
    for (int i = 0; i < ROW; i++) {
        for (int j = 0; j < COL; j++) {
            std::cout << map[i][j];
        }
        std::cout << '\n';
    }
}