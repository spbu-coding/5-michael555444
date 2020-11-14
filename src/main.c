#include <stdio.h>

void other() {
    printf("It's other function.\n"); fflush(stdout);
    printf(" Function had been returned to function <<other>>\n"); fflush(stdout);
}

void input() {
    char buff[20];
    printf("Enter text:\n"); fflush(stdout);
    scanf("%s", buff);
    printf("%p", &other); fflush(stdout);
    printf("You enter: %s\n", buff); fflush(stdout);
    printf(" Function stayed in function <<input>>\n"); fflush(stdout);
}

int main() {
    input();
    printf(" Function had been returned to function <<main>>\n"); fflush(stdout);
    return 0;
}
