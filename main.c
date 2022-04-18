#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int f = 0;
    int b = 0;
    for (int i = 1; i < 100; i++)
    {
        printf("%i", i);
        
        if (++f == 3)
        {
            printf(": Fizz");
            f = 0;   
        }
        if (++b == 5)
        {
            if (f != 0)
                printf(": Buzz"); // would be faster than doing 2 printf calls consecutively I think
            else
                printf("Buzz");
            b = 0;
        }
        
        printf(".\n");
    }
    return 0;
}
