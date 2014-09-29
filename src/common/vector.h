#ifndef __TH_PARTICLE_VECTOR_H__
#define __TH_PARTICLE_VECTOR_H__

struct th_vector3 {
    float x, y, z;
}

struct th_vector2 {
    float x, y;
}

#define th_vector3_new(x,y,z) ({.x = x, .y = y, .z = z});

#endif//__TH_PARTICLE_VECTOR_H__
