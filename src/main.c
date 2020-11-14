#include <stdio.h>

#define fflush(stdout) out

void input() {
    char buff[20];
    printf("Enter text:\n"); out;
    scanf("%s", buff);
    printf("%p", &other); out;
    printf("You enter: %s\n", buff); out;
}

void other() {
    printf("It's other function.\n"); out;
}

int main() {
    input();
    return 0;
}
