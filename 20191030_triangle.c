#include <stdio.h>

int main(int argc, char **argv)
{
    unsigned int i, j, rows;

    printf("Enter number: ");
    scanf("%d", &rows);

    for(i=1; i<=(rows/2)+1; i++)
    { 
        for(j=i; j<rows; j++)
        {
            printf(" ");
        }

        for(j=1; j<=(2*i-1); j++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
