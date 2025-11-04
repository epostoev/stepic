#include "postoev.h"

int main(void) {
    char str[100] = {0};
    char result_str[100] = {0};
    
    fgets(str, sizeof(str), stdin);
    int len = strlen(str);
    len = deleteNulSimbyl(str, len);
    printStringInfo(str, len);

    // printf("i | Символ | Действие\n");
    // printf("--|--------|---------\n");


    // for(int i = 0; str[i] != '\0'; i++){
    //     if (str[i] = ' ' && str[i++] == ' '){
    //     result_str[i++] = ' ';
    //     } else {
    //         result_str[]
    //     }
    // }
    // printStringInfo(result_str, len);
    // printStringInfo(str, len);
    return 0;
}