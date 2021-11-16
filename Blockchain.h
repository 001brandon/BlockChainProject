#ifndef BLOCKCHAIN_H
#define BLOCKCHAIN_H

#include <vector>
#include "transaction.h"
#include "block.h"

class Blockchain{
    public:
        Blockchain();
        std::vector<Block> getChain();
        Block *getLatestBlock();
        bool isChainValid();
        void addBlock(transaction data);
        void printChain();



    private:
        std::vector<Block> chain;
        Block generateGenisisBlock();
};



#endif