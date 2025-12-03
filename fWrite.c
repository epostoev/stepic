#include <stdio.h>
#include <string.h>

int main(void) {
    FILE* f = fopen("example.txt", "r");
    if (f == NULL) {
        printf("Ошибка при создании файла");
        return 1;
    } 
    int a = 666;
    fscanf(f, "%d", &a);
    fclose(f);
    printf("%d\n", a);
    return 0;
}