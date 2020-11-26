#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.c>

int i, j, x, y;

int main() {
    srand(time(NULL));
    
    x = 52;
    y = 10;
    
    for (i = 1; i <= 8; i++) {
        y = y + 1;
        gotoxy(x, y);
        printf(" o o o o o o o o \n");
    }
    
    
    
    printf("\n");
    system("pause");
    return 0;
}
