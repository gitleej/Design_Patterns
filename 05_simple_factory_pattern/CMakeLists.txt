include_directories(./include)

set(SRC_FILES ./src src/AbstractFruit.cpp include/AbstractFruit.h src/Apple.cpp include/Apple.h src/Banana.cpp include/Banana.h src/Pear.cpp include/Pear.h src/FruitFactory.cpp include/FruitFactory.h)

add_executable(05_simple_factory_pattern main.cpp
        ${SRC_FILES})