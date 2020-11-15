#include <stdio.h>

void other() {
    printf("\nIt's other function."); fflush(stdout);
    printf("\nFunction had been returned to function <<other>>\n"); fflush(stdout);
    return;
}

void input() {
    char buff[10];
    printf("Enter text:\n"); fflush(stdout);
    scanf("%s", buff);
    printf("%p", &other); fflush(stdout);
    printf("\nYou enter: %s", buff); fflush(stdout);
}

int main() {
    printf("%p\n", &main);
    printf("%p\n", &other);
    input();
    printf("Function had been outputed to function <<main>>\n");
    return 0;
}
