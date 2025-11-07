#include "postoev.h"

int main() {
    int n = 0;
    printf("Введите кол-во команд: \n");
    scanf("%d", &n);

    int x = 0, y = 0;

    printf("\n Начальная позиция: (%d, %d)\n\n", x, y);
    printf("Шаг|Направление|Шагов| X| Y|\n");
    printf("---|-----------|-----|--|--|----\n");

    for (int i = 0; i < n; i++)
    {
        char dirrection[6] = {};
        int steps = 0;      
        scanf("%s %d", dirrection, &steps);
        printf("%2d |%-11s|%5d| ", i + 1, dirrection, steps);
        if (strcmp(dirrection, "North") == 0) {
            y = y + steps;
            printf("%1d| %d| \u2191 \n", x, y);
        } else if (strcmp(dirrection, "South") == 0) {
            y = y - steps;
            printf("%1d| %d| \u2193 \n", x, y);
        } else if (strcmp(dirrection, "East") == 0) {
            x = x + steps;
            printf("%1d| %d| \u2192 \n", x, y);
        } else if (strcmp(dirrection, "West") == 0) {
            x = x - steps;
            printf("%1d| %d| \u2190 \n", x, y);
        }
    }
    
    printf("\n === Координаты клада === \n");
    printf("X = %d, Y = %d\n", x, y);
    return 0;
}