include_directories(./include)

set(SRC_FILES ./src
        src/BankWorker.cpp include/BankWorker.h src/AbstractBankWorker.cpp include/AbstractBankWorker.h src/SaveBankWorker.cpp include/SaveBankWorker.h src/PayBankWorker.cpp include/PayBankWorker.h src/TransferBankWorker.cpp include/TransferBankWorker.h)

add_executable(04_dependency_inversion_principle main.cpp
        ${SRC_FILES})