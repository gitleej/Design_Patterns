set(SRC_FILES src/AbstractFactory.cpp include/AbstractFactory.h src/AbstractApple.cpp include/AbstractApple.h src/AbstractBanana.cpp include/AbstractBanana.h src/AbstractPear.cpp include/AbstractPear.h src/Apple.cpp include/Apple.h src/Banana.cpp include/Banana.h src/Pear.cpp include/Pear.h src/Factory.cpp include/Factory.h)

add_executable(07_abstract_factory_pattern main.cpp ${SRC_FILES})