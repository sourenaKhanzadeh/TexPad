set(SRC_FILE 
    main.cpp)


add_subdirectory(utils)

# add_executable(${PROJECT_NAME} ${SRC_FILE})

# target_link_libraries(${PROJECT_NAME})

pybind11_add_module(texpad ${SRC_FILE})

install(TARGETS texpad DESTINATION ${CMAKE_SOURCE_DIR}/python)