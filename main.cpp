#include <iostream>
#include <iomanip>
#include <sstream>
#include <string>
#include "sha256.h"
#include "transaction.h"
#include "block.h"
#include "Blockchain.h"
#include <chrono>
#include <ctime> 

#define MAXCOIN 25000



int main() {

    transaction first={32.0,"from","to",11};
    transaction second={6999.9,"other","test",2229};
    Blockchain chain1;
    chain1.addBlock(first);
    chain1.addBlock(second);
    chain1.printChain();
    std::cout << "finished";
}