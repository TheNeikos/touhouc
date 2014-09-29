
#include "particle/manager.h"

#include <stdio.h>
#include <SDL2/SDL.h>

#define GLEW_STATIC
#include <GL/glew.h>

int
main(
    int argc,
    char** argv
) {
    SDL_Init(SDL_INIT_VIDEO);
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_PROFILE_MASK,
            SDL_GL_CONTEXT_PROFILE_CORE);
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_MAJOR_VERSION, 3);
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_MINOR_VERSION, 2);

    SDL_GL_SetAttribute(SDL_GL_DOUBLEBUFFER, 1);
    SDL_GL_SetAttribute(SDL_GL_DEPTH_SIZE, 24);
    SDL_GL_SetSwapInterval(1);

    SDL_Window* window = SDL_CreateWindow("TouhouC", 100, 100, 400, 400,
            SDL_WINDOW_SHOWN | SDL_WINDOW_OPENGL);

    SDL_GLContext context = SDL_GL_CreateContext(window);
    glewExperimental = GL_TRUE;
    int err;
    if ((err = glewInit()) != GLEW_OK) {
        printf("Could not initialize GLEW\n");
        printf("%s", glewGetErrorString(err));
        exit(1);
    }

    struct th_particle_manager* manager = th_particle_manager_new();

    double last_time = SDL_GetTicks() / 1000;
    SDL_Event e;
    while(1) {
        if (SDL_PollEvent(&e)) {
            if (e.type == SDL_QUIT) {
                break;
            }
        }

        th_particle_manager_update(dt, manager);


        th_particle_manager_draw(dt, manager);

        SDL_GL_SwapWindow(window);
    }

    SDL_GL_DeleteContext(context);
    SDL_Quit();
    return 0;
}

