
include_directories(${PROJECT_SOURCE_DIR}/src)

set(SOURCE_FILES
    main.c
    world/world.c
)

add_definitions(-Wall -Wextra -Wunused -Wformat)
add_definitions(-Wno-unused-parameter -pedantic)
add_definitions(-std=c11)

add_executable(touhouc ${SOURCE_FILES})
set_target_properties(touhouc PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR})
target_link_libraries(touhouc ${SDL2_LIBRARY})
