#include <stdio.h>
int main() {
    int n;
    printf("Enter number: ");
    scanf("%d", &n);

    if (n % 3 == 0 && n % 5 == 0)
        printf("Divisible by both 3 and 5\n");
    else
        printf("Not divisible by both 3 and 5\n");

    return 0;
}
