include_directories(./include)

set(SRC_FILES ./src src/AbstractFruit.cpp include/AbstractFruit.h src/Apple.cpp include/Apple.h Banana.cpp Banana.h Pear.cpp Pear.h FruitFactory.cpp FruitFactory.h)

add_executable(05_simple_factory_pattern main.cpp
        ${SRC_FILES})