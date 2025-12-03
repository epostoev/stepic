#include <stdio.h>
#include <string.h>

int count_words(char *str) {
    int cnt = 0;
    char current_symbol = 0;
    char before_symbol = 0;
    while (*str != '\0') {
        char curretn_symbol = *str;
        if (*str != ' ') {
            current_symbol = *str;
        }
        else 
        before_symbol = *str;
        str++;
    }
    printf("\n");

    return cnt;
}

int main() {
    char str[] = "1 2 3";
    int cnt = count_words(str);
    printf("CNT = %d\n", cnt);
    return 0;
}