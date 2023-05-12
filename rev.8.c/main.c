#include <stdio.h>

void stringCopy(char* dest, const char* src);

int main() {
    char source[100];
    char destination[100];

    printf("Enter a string: ");
    fgets(source, sizeof(source), stdin);

    stringCopy(destination, source);

    printf("Copied string: %s", destination);

    return 0;
}

void stringCopy(char* dest, const char* src) {
    int i = 0;

    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }

    dest[i] = '\0';
}
