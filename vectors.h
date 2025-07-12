#ifndef VECTORS_H
#define VECTORS_H

#include <math.h>

// vector2 struct 
typedef struct{
    float x;
    float y;
    float magnitude;
}vector2;

// creating and initializing the vector
vector2 create(float x, float y);

// returns distance between two vector
float distance(vector2 a, vector2 b);

//------------------------------------------//
// vector3 struct
typedef struct{
    float x;
    float y;
    float z;
    float magnitude;
}vector3;

// creating and initializing vectors
vector3 create_3(float x, float y, float z);

// distance betwwen 3 point vectors
float distance_3(vector3 a, vector3 b);

#endif