#ifndef __TH_PARTICLE_PARTICLE_H__
#define __TH_PARTICLE_PARTICLE_H__

#include "common/vector.h"

struct th_particle {
    double start_time;
    double ttl;
    int dead;
    int fade;
    struct th_vector2 direction;
    struct th_vector2 old_position;
    struct th_vector2 position;
    struct th_particle* next;
}

#endif//__TH_PARTICLE_PARTICLE_H__
