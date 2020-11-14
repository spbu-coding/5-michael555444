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
    printf("\nYou enter: %s", buff); fflush(stdout);
    printf("\nFunction stayed in function <<input>>"); fflush(stdout);
}

int main() {
    input();
    return 0;
}
