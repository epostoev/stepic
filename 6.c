#include "postoev.h"

int main(void) {
    char str_1[14] = {};
    char str_2[14] = {};

    printf("Введите первую строку:\n");
    fgets(str_1, sizeof(str_1), stdin);
    printf("Введите вторую строку:\n");
    fgets(str_2, sizeof(str_2), stdin);

    // Удаляем символ переноса строки
    int len_str1 = strlen(str_1);
    int len_str2 = strlen(str_2);
    if (len_str1 > 0 && str_1[len_str1 - 1] == '\n') {
        str_1[len_str1 - 1] = '\0';
        len_str1 --;
    }
    if (len_str2 > 0 && str_2[len_str2 - 1] == '\n') {
        str_2[len_str2 - 1] = '\0';
        len_str2 --;
    }
    printf("\n === Поиск расстояния Хэмминга === \n");
    printf("Строка 1: \"%s\" (Длина: %d)\n", str_1, len_str1);
    printf("Строка 2: \"%s\" (Длина: %d)\n", str_2, len_str2);

    printf("i | str[1] | str[2] | Совпадает:?\n");
    printf("--|--------|--------|------------\n");
    
    int distance_hemming = 0;
    for (int i = 0; i < len_str1; i++)
    {
        if (str_1[i] == str_2[i]) {
            char match = '+';
            printf("%2d|%-8.8s|%-8.8s|     %c     \n", i, str_1, str_2, match );
        }
        else {
            char match = '-';
            printf("%2d|%-8.8s|%-8.8s|     %c     \n", i, str_1, str_2, match );
            distance_hemming ++;
        }
    }
    

    printf("%s\n", str_1);
    printf("%d\n", len_str1);
    printf("%s\n", str_2);
    printf("%d\n", len_str2);
    printf("Расстояние Хэмминга: %d\n", distance_hemming);
    return 0;
}





// #include <stdio.h>
// #include <string.h>

// int main(void) {
//     char str_1[14] = {};
//     char str_2[14] = {};

//     fgets(str_1, sizeof(str_1), stdin);
//     fgets(str_2, sizeof(str_2), stdin);

//     // Удаляем символ переноса строки
//     int len_str1 = strlen(str_1);
//     int len_str2 = strlen(str_2);
//     if (len_str1 > 0 && str_1[len_str1 - 1] == '\n') {
//         str_1[len_str1 - 1] = '\0';
//         len_str1 --;
//     }
//     if (len_str2 > 0 && str_2[len_str2 - 1] == '\n') {
//         str_2[len_str2 - 1] = '\0';
//         len_str2 --;
//     }
//     int distance_hemming = 0;
//     for (int i = 0; i < len_str1; i++)
//     {
//         if (str_1[i] == str_2[i]) {
//             printf("we are here \n");
//         }
//         else {
//             printf("there are here \n");
//             printf("there are here \n");
//             distance_hemming ++;
//         }
//     }
    
//     printf("%d", distance_hemming);
//     return 0;
// }