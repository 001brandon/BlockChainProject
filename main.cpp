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
    std::time_t current=time(0);
    transaction first={32.0,"from","to",time(&current)};
    transaction second={6999.9,"other","test",time(&current)};
    Blockchain chain1;
    chain1.addBlock(first);
    chain1.addBlock(second);
    chain1.printChain();
    std::cout << "finished";

    float amount;
    std::string senderKey;
    std::string recieverKey;

    while(1){
        std::cout << "\n\nPlease Your Sender Key: " << std::endl;
        std::cin >> senderKey;
        std::cout << "Please Your Reciever Key: " << std::endl;
        std::cin >> recieverKey;
        std::cout << "Please enter the amount you wish to send: " << std::endl;
        std::cin >> amount;
        transaction tempTransaction={amount, senderKey, recieverKey, time(&current)};
        chain1.addBlock(tempTransaction);
        chain1.printChain();
    }
}