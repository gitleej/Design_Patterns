include_directories(./include)

set(SRC_FILES ./src
        ./src/AbstractFruit.cpp
        ./src/Apple.cpp
        ./src/Banana.cpp
        ./src/Pear.cpp src/AbstractFruitFactory.cpp include/AbstractFruitFactory.h src/AppleFactory.cpp include/AppleFactory.h src/BananaFactory.cpp include/BananaFactory.h src/PearFactory.cpp include/PearFactory.h)

add_executable(06_factory_method_pattern main.cpp
        ${SRC_FILES})