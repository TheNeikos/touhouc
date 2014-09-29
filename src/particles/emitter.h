#ifndef __TH_PARTICLE_EMITTER_H__
#define __TH_PARTICLE_EMITTER_H__

#include "common/vector.h"
#include "particle/particle.h"

struct th_particle_emitter {
    double start_time;
    double ttl;
    int dead;
    int fade;
    struct th_particle_emitter* next;
    struct th_vector2 position;
    void (*draw)(double);
    void (*update)(double);
    struct th_particle* head;
}

#endif//__TH_PARTICLE_EMITTER_H__
