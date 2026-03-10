#include <stdio.h>
int main(){
    int n, k, s;
    printf("Enter number of rows: ");
    scanf("%d", &n);
    for (k = 1; k <= n; k++)
    {
        for (s = 1; s <= n - k; s++)
        {
            printf(" ");
    }
        for (s = 1; s <= 2 * k - 1; s++)
        {
            if (k == 1 || k == n || s == 1 || s == 2 * k - 1)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}

