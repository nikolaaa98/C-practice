#include <stdio.h>
#include <string.h>

#define MAX_STRING 31

int broj_pojavljivanja(char *str_veliki, char *str_mali) {
    int br = 0;
    while(strstr(str_veliki, str_mali) != NULL) {
        br++;
        str_veliki = strstr(str_veliki, str_mali)
        + strlen(str_mali);
    }
    return br;
}


int main() {
    char str1[MAX_STRING];
    strcpy(str1, "Znanje");
    puts(str1);
    puts(strcpy(str1, "Imanje"));

    char str1[MAX_STRING] = "";
    while(strcmp(str1, "exit") != 0) {
        fgets(str1, MAX_STRING, stdin);
        int duzina_str1 = strlen(str1);
        if(duzina_str1 < MAX_STRING - 1) str1[strlen(str1) - 1] = '\0';
            printf("Unet je string: %s\n", str1);
    }

    return 0;
}
