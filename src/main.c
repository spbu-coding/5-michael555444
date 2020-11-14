#include <stdio.h>

void other() {
    printf("It's other function.\n"); fflush(stdout);
}

void input() {
    char buff[20];
    printf("Enter text:\n"); fflush(stdout);
    scanf("%s", buff);
    printf("%p", &other); fflush(stdout);
    printf("You enter: %s\n", buff); fflush(stdout);
}

int main() {
    input();
    return 0;
}
