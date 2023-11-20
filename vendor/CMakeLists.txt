cmake_policy(SET CMP0077 NEW)
set( BUILD_SHARED_LIBS OFF CACHE BOOL "Build shared libraries" FORCE )

# Platform specific libraries
if (APPLE)
    target_link_libraries( ${PROJECT_NAME}  "-framework IOKit" )
    target_link_libraries( ${PROJECT_NAME}  "-framework Cocoa" )
    target_link_libraries( ${PROJECT_NAME}  "-framework OpenGL" )
endif()

# Raylib
add_subdirectory( raylib )
target_link_libraries( ${PROJECT_NAME}  raylib )
