#include<stdio.h>
//M. DHANUSHRAJ 
//21BAI10111
int main() 
{
    int a,b,c,d, i, j, k;
    int m[10][10], n[10][10], res[10][10];

    printf("Enter the order of first matrix:");
    scanf("%d%d", & a, & b);
    printf("Enter the order of second matrix:");
    scanf("%d%d", & c, & d);

    if (b != c) 
	{
        printf("Matrix is incompatible for multiplication. Check the order of the matrix again.\n");
    } 
	else 
	{
        printf("Enter the elements of Matrix-A:\n");
        for (i = 0; i < a; i++) 
		{
            for (j = 0; j < b; j++) 
			{
                scanf("%d", & m[i][j]);
            }
        }

        printf("Enter the elements of Matrix-B:\n");
        for (i = 0; i < c; i++) 
		{
            for (j = 0; j < d; j++) 
			{
                scanf("%d", & n[i][j]);
            }
        }

        for (i = 0; i < a; i++) 
		{
            for (j = 0; j < d; j++) 
			{
                res[i][j] = 0;
                for (k = 0; k < c; k++) 
				{
                    res[i][j] += m[i][k] * n[k][j];
                }
            }
        }

        printf("The product of the two matrices is:-\n");

        for (i = 0; i < a; i++) 
		{
            for (j = 0; j < d; j++) 
			{
                printf("%d\t", res[i][j]);
            }
            printf("\n");
        }
    }

    return 0;
}

