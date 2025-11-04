#include <stdio.h>
#include <string.h>

void deleteNulSimbyl(char *str, int len){
        if (len > 0 && str[len - 1] == '\n'){
        str[len - 1] = '\0';
    }
} 

int main(void) {
    char search_char;
    char str[101];
    scanf("%c\n", &search_char);
    fgets(str, sizeof(str), stdin);
    int len = strlen(str);

    deleteNulSimbyl(str, len);

    int index_search_char = -1;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == search_char){
            index_search_char = i;
        }
    }
    printf("index [%d]\n", index_search_char);
    return 0;
}
