set(SOURCES 
    parser.cpp)

set(HEADERS 
    parser.h)

# add_library( utils SHARED ${SOURCES} ${HEADERS} )

# target_include_directories( utils PUBLIC 
#     ${CMAKE_CURRENT_SOURCE_DIR} 
#     ${PY_INCLUDE_DIR})

pybind11_add_module( parser ${SOURCES} ${HEADERS} )

install(TARGETS parser DESTINATION ${CMAKE_CURRENT_SOURCE_DIR}/../../python)