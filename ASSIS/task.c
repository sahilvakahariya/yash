#include <stdio.h>
int main() {
    int choice;
    float r, area, l, b, p, n, si;
    int num, i;
    printf("1. Area of Circle\n");
    printf("2. Area of Rectangle\n");
    printf("3. Simple Interest\n");
    printf("4. Print Any Table\n");
    printf("5. Exit\n");
    
    printf("Enter your choice: ");
    scanf("%d", &choice);
    switch (choice) {
        case 1:
            printf("Enter radius: ");
            scanf("%f", &r);
            area = 3.14 * r * r;
            printf("Area of Circle = %.2f", area);
            break;

        case 2:
            printf("Enter length and breadth: ");
            scanf("%f %f", &l, &b);
            area = l * b;
            printf("Area of Rectangle = %.2f", area);
            break;

        case 3:
            printf("Enter P, N, R: ");
            scanf("%f %f %f", &p, &n, &r);
            si = (p * n * r) / 100;
            printf("Simple Interest = %.2f", si);
            break;

        case 4:
            printf("Enter number for table: ");
            scanf("%d", &num);
            for (i = 1; i <= 10; i++) {
            printf("%d x %d = %d\n", num, i, num * i);
            }
            break;

        case 5:
            printf("Exit Program");
            break;

        default:
            printf("Invalid Choice");
    }

    return 0;
}

