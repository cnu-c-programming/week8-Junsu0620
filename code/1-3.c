#include <stdio.h>

char *my_strcat(char *dst, const char *scr) {

    while (*dst != '\0') {
        dst++;
    }

    while (*scr != '\0') {
        *dst = *src;
        dst++;
        scr++;
    }
    *dst = '\0';
}

int main() {
    char str1[20]  = "Hello";
    char str2[] = "World";

    printf("%s\n", str1);
    my_strcat(str1, str2);
    printf("%s\n", str1);
  
  return 0;
}
