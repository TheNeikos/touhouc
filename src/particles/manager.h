#ifndef __TH_PARTICLE_MANAGER_H__
#define __TH_PARTICLE_MANAGER_H__

#include "particle/emitter.h"

struct th_particle_manager {
    int emitter_count;
    struct th_particle_emitter** emitters;
}

void
th_particle_manager_update(
    double dt,
    struct th_particle_manager*
);

void
th_particle_manager_draw(
    double dt,
    struct th_particle_manager*
);

void
th_particle_manager_rm_emitter(
    struct th_particle_manager* manager,
    struct th_particle_emitter* to_delete
);
#endif//__TH_PARTICLE_MANAGER_H__
