#include <stdio.h>

void input() {
    char buff[20];
    printf("Enter text:\n"); fflush(stdout);
    scanf("%s", buff);
    printf("%p", &other); fflush(stdout);
    printf("You enter: %s\n", buff); fflush(stdout);
}

void other() {
    printf("It's other function.\n"); fflush(stdout);
}

int main() {
    input();
    return 0;
}
