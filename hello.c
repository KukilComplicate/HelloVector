// Physics Vector
#include <stdio.h>
#include <math.h>
#define N 10

struct Location{
    double x;
    double y;
    double z;
};

int main()
{
    printf("Hello World!\n");

    struct Location L1;
    L1.x = 70.0;
    L1.y = 21.2;
    L1.z = 36.6;

    int a = 0;

    for(int i=0; i<5; i++)
    {
        a = a + N;
        printf("The value of a is %d\n", a);
    }

    printf("\n");
    printf("The position of L1 is %lf, %lf, %lf\n", L1.x, L1.y, L1.z);
    double mag = L1.x * L1.x + L1.y * L1.y + L1.z * L1.z; 
    printf("The magnitude of L1 is %lf\n", sqrt(mag));
    return 0;
}
