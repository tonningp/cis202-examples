/*
 * File: main.cpp
 * Description:
 * Author:
 * Date:
 * Email:
*/
#include<iostream>

const int ROWS = 10;
const int COLS = 11;

void draw_map(const char map[][COLS] )
{
    for(int i=0;i<ROWS;i++)
    {
        std::cout << map[i] << std::endl;
    }
}

int main()
{

    char map[ROWS][COLS] = {
        "##########",
        "####     #",
        "####  ## #",
        "### % ## #",
        "###   ## #",
        "######## #",
        "##       #",
        "## #######",
        "## x #####",
        "##########"
    };
    
    draw_map(map);

    return 0;
}
