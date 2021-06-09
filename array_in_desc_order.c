#include <stdio.h>
void main ()
    {
        int number[30];
        int i, j, a, n;
        scanf("%d", &n);
        for (i = 0; i < n; ++i)
	        scanf("%d", &number[i]);
        for (i = 0; i < n; ++i) 
        {
            for (j = i + 1; j < n; ++j) 
            {
                if (number[i] < number[j]) 
                {
                    a = number[i];
                    number[i] = number[j];
                    number[j] = a;
                }
            }
        }
 		for (i = 0; i < n; ++i) 
        {
            printf("%d ", number[i]);
        }
 	}
