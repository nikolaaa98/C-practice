#include <stdio.h>
#include <string.h>

#define MAX_STRING 31

int main(){

    char str1[MAX_STRING] = "Veni, ";
    char str2[] = "vidi, ";
    printf("%s\n", strcat(str1, str2));
    strcat(str1, "vici. ");
    printf("%s\n", str1);
    return 0;
}