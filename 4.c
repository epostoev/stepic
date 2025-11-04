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

int deleteNulSimbyl(char *str, int len){
        if (len > 0 && str[len - 1] == '\n'){
        str[len - 1] = '\0';
        len--;
        return len;
    }
} 

int main(void) {
    char binary_string [21] = {0};
    fgets(binary_string, sizeof(binary_string), stdin);
    int len_str = strlen(binary_string);

    len_str = deleteNulSimbyl(binary_string, len_str);
    // printStringInfo(binary_string, len_str);

    int decimal = 0;
    int power = 1;

    for (int i = len_str - 1; i >= 0; i--)
    {
        if (binary_string[i] == '1') {
            decimal +=power;
        }
        power *= 2;
    }
    printf("%d", decimal);

    return 0;
}