include_directories(./include)

set(SRC_FILES
        "./src/AbstractBuilding.cpp"
        "./src/AbstractMediator.cpp"
        "./src/BuildingA.cpp"
        "./src/BuildingB.cpp"
        "./src/MediatorA.cpp" ../07_abstract_factory_pattern/main.cpp)

add_executable(02_law_of_demeter main.cpp
        ${SRC_FILES})