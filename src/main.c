#include <stdio.h>

void other() {
    printf("\nFunction had been returned to function <<other>>\n"); fflush(stdout);
    return;
}

void input() {
    char buff[20];
    printf("Enter text:\n"); fflush(stdout);
    scanf("%s", buff);
    printf("%p", &other); fflush(stdout);
    printf("\nYou enter: %s", buff); fflush(stdout);
}

int main() {
    printf("%p\n", &main);
    printf("%p\n", &other);
    input();
    printf("\nFunction had been outputed to function <<main>>\n");
    return 0;
}
