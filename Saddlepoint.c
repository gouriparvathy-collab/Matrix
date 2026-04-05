#include <stdio.h>
int main()
{
    int a[10][10], r, c;
    int i, j;
    int min, col;
    int saddle = 0;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c);
    printf("Enter the matrix elements:\n");
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    largest = second = a[0][0];

    for(i=0;i<r;i++)
    {
        for(j=0;j<col;j++)
        {
            if(a[i][j] > largest)
            {
                second = largest;
                largest = a[i][j];
            }
            else if(a[i][j] > second && a[i][j] != largest)
            {
                second = a[i][j];
            }
        }
    }

    printf("Second largest element = %d\n", second);
    for(i = 0; i < r; i++)
    {
        min = a[i][0];
        col = 0;
        for(j = 1; j < c; j++)
        {
            if(a[i][j] < min)
            {
                min = a[i][j];
                col = j;
            }
        }
       for(j = 0; j < r; j++)
        {
            if(a[j][col] > min)
                break;
        }

        if(j == r)
        {
            printf("Saddle point is %d\n", min);
            saddle = 1;
        }
    }

    if(saddle == 0)
        printf("No saddle point");

    return 0;
}
