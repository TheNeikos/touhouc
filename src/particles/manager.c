
#include "manager.h"

void
th_particle_manager_update(
    double dt,
    struct th_particle_manager* manager
) {
    struct th_particle_emitter* cur;
    for (cur = manager->head; cur; cur = cur->next) {
        cur->update(dt);
    }

    for (cur = manager->head; cur; cur = cur->next) {
        if (cur->dead) {
            th_particle_manager_rm_emitter(manager, manager->emitters[i]);
        }
    }

}

void
th_particle_manager_draw(
    double dt,
    struct th_particle_manager* manager
) {
    struct th_particle_emitter* cur;
    for (cur = manager->head; cur; cur = cur->next) {
        cur->draw(dt);
    }
}

void
th_particle_manager_rm_emitter(
    struct th_particle_manager* manager,
    struct th_particle_emitter* to_delete
) {
    struct th_particle_emitter* cur;
    for (cur = manager->head; cur; cur = cur->next) {
        if (cur->next == to_delete) {
            struct th_particle_emitter* tmp = cur->next->next;
            th_particle_emitter_free(cur->next);
            cur->next = tmp;
            return;
        }
    }
}

