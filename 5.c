#include "postoev.h"

int main(void) {
    char str[100] = {0};
    char result_str[100] = {0};
    
    fgets(str, sizeof(str), stdin);
    int len = strlen(str);
    len = deleteNulSimbyl(str, len);
    printStringInfo(str, len);

    printf("i | str[i] | j | result_str[j]  |  !prev_space  |Действие\n");
    printf("--|--------|---|----------------|---------------|---------------\n");

    int prev_space = 1;
    int j = 0;
    for(int i = 0; str[i] != '\0'; i++){
        //если встречается пробел то уточнить был ли пробел до него
        if (str[i] == ' '){
            if (prev_space == 0) {
                printf("%2d| пробел |%2d |   result[%2d]   |      %d        |Добавляем пробел \n", i, j, j, prev_space );
                result_str[j] = str[i];
                j = j + 1;
                prev_space = 1;
            } else {
                printf("%2d| пробел |%2d |   ----------   |      %d        |Пропускаем лишний \n", i, j, prev_space);
            }
        }
        else {
            printf("%2d|   '%c'  |%2d |   result[%2d]   |      -        |Добавляем '%c' \n", i, str[i], j, j, str[i] );
            result_str[j++] = str[i];
            prev_space = 0;
            }
    }

    if (result_str[j - 1] == ' '){
        result_str[j - 1] = '\0'; 
    }
    printStringInfo(result_str, len);
    return 0;
}