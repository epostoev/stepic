#include <stdio.h>
#include <string.h>

int main(void) {
    FILE* f = fopen("example.txt", "w");
    if (f == NULL) {
        printf("Ошибка при создании файла");
        return 1;
    } 
    // fprintf(f, "Привет Файл_1!\n");
    fprintf(f, "%d", 12);
    fclose(f);
    return 0;
}