#include <stdio.h>
#include <string.h>

void reverse() {
    char c;
    scanf("%c", &c);
    if (c != '\n') {
        reverse();
        printf("%c", c);
    }
}

int main() {
    printf("Please enter a sentence: ");
    fflush(stdout);
    reverse();
}
