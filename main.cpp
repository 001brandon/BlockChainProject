#include <iostream>
#include <iomanip>
#include <sstream>
#include <string>
#include "sha256.h"
#include "transaction.h"
#include "block.h"
#include <chrono>
#include <ctime> 

#define MAXCOIN 25000



int main() {

    transaction first={32.0,"joe","mama",11};
    Block newblock(0,first,"0");
    std::cout << newblock.getPrevHash();
}