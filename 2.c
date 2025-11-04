#include <stdio.h>
#include <string.h>

void printStringInfo(char* str, int len){
    printf("\n==========Analyze stroki=========\n");
    printf("Dlina stroki %d simvolov \n\n", len);

    printf("Simbol | Indecs | kod ASCII | Address v pamyati\n");
    printf("------ | ------ | --------- | -----------------\n");

    for (int i = 0; str [i] != '\0'; i++) {
        printf("  '%c'  |  [%2d]  |    %3d    |     %p\n", str[i], i, str[i], (void*)&str[i]);
    }
}

int main(void) {
    char str[101] = {0};
    printf("Vvedite strochku: ");
    fgets(str, sizeof(str), stdin);
    int len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
        len --;
    }
    printStringInfo(str, len);

    return 0;
}
