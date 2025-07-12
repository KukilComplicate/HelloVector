#include <stdio.h>
#include "vectors.h"

int main()
{
    printf("Testing Vectors\n");
    // creating and testing 2 point vector
    vector2 v1 = create(2.12f, 3.15f);
    vector2 v2 = create(-3.15f, -1.50f);

    printf("Vector1 x:%.2f y:%.2f and its magnitude:%.2f\n", v1.x, v1.y, v1.magnitude);
    printf("Vector2 x:%.2f y:%.2f and its magnitude:%.2f\n", v2.x, v2.y, v2.magnitude);

    printf("Distance between v1 and v2 is %.2f\n\n", distance(v1, v2));

    // creating and testing 3 point vector
    vector3 v3 = create_3(2.5f, 3.0f, -10.f);
    vector3 v4 = create_3(-3.f, 2.0f, 6.f);

    printf("Vector3 x:%.2f y:%.2f z:%.2f and its magnitude:%.2f\n", v3.x, v3.y, v3.z, v3.magnitude);
    printf("Vector4 x:%.2f y:%.2f z:%.2f and its magnitude:%.2f\n", v4.x, v4.y, v4.z, v4.magnitude);

    printf("The distance: %.2f\n", distance_3(v3, v4));

    return 0;
}
