#include <stdio.h>

int main()
{
    int r;
    float area;
    printf("\nEnter radius : ");
    scanf("%d", &r);
    area = 3.14 * r * r;
    printf("\nArea = %g", area);
}