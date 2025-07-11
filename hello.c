#include <stdio.h>
#define N 10

int main()
{
    printf("Hello World!\n");
    int a = 0;
    for(int i=0; i<5; i++)
    {
        a = a + N;
        printf("The value of a is %d\n", a);
    }
    return 0;
}
