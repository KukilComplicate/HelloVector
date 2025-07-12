#include "vectors.h"

vector2 create(float x, float y) 
{
    vector2 c;
    c.x = x;
    c.y = y;
    c.magnitude = sqrt(x * x + y * y);
    return c;
}

// calculate the distance between two vectors
float distance(vector2 a, vector2 b)
{
    float dx = b.x - a.x;
    float dy = b.y - a.y;
    return sqrt(dx * dx + dy * dy);
}

// create a new vector 
vector3 create_3(float x, float y, float z)
{
    vector3 v;
    v.x = x;
    v.y = y;
    v.z = z;
    v.magnitude = sqrt(x * x + y * y + z * z);
    return v;
}

// distance between 3 point vectors
float distance_3(vector3 a, vector3 b)
{
    float dx = b.x - a.x;
    float dy = b.y - a.y;
    float dz = b.z - a.z;
    return sqrt(dx * dx + dy * dy + dz * dz);
}