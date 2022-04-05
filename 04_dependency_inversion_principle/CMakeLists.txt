include_directories(./include)

set(SRC_FILES ./src
        src/BankWorker.cpp include/BankWorker.h src/AbstractBankWorker.cpp include/AbstractBankWorker.h SaveBankWorker.cpp SaveBankWorker.h PayBankWorker.cpp PayBankWorker.h TransferBankWorker.cpp TransferBankWorker.h)

add_executable(04_dependency_inversion_principle main.cpp
        ${SRC_FILES})