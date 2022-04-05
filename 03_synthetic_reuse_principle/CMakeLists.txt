include_directories(./include)

set(SRC_FILES
        src/AbstractCar.cpp
        src/BMW.cpp src/Porsche.cpp include/Porsche.h src/Person.cpp include/Person.h)

add_executable(03_synthetic_reuse_principle main.cpp
        ${SRC_FILES})