#include <stdio.h>

void other() {
    printf("\nIt's other function."); fflush(stdout);
    printf("\nFunction had been returned to function <<other>>\n"); fflush(stdout);
}

void input() {
    char buff[20];
    printf("Enter text:\n"); fflush(stdout);
    scanf("%s", buff);
    printf("%p", &other); fflush(stdout);
    printf("\nYou enter: %s", buff); fflush(stdout);
}

int main() {
    input();
    return 0;
}
