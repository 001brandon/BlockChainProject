#include <stdio.h>
#include <ctime>
#include <string>

#include "Blockchain.h"

#include <vector>


Blockchain::Blockchain(){
    Block genisis= generateGenisisBlock();
    chain.emplace_back(genisis);
}

Block Blockchain::generateGenisisBlock(){
    // Get Current Time
    std::time_t current;

    // Setup Initial Transaction Data
    transaction d={0, "Genesis", "Genesis", time(&current)};

    // Return Genesis Block
    Block genesis(0, d, "0");
    return genesis;
}

void Blockchain::addBlock (transaction data){
    int index = (int)chain.size();
    std::string previousHash = chain.size() > 0 ? getLatestBlock()->getHash(): "0";
    Block newBlock(index, data, getLatestBlock()->getHash());
    chain.emplace_back(newBlock);
}

void Blockchain::printChain() {
    std::vector<Block>::iterator it;

    for (it = chain.begin(); it != chain.end(); ++it)
    {
        Block currentBlock = *it;
        std::cout<< "\n\nBlock ===================================" << std::endl;
        std::cout << "Index: " << currentBlock.getIndex() << std::endl;
        it->printTransaction();
        std::cout << "Hash: " << currentBlock.getHash() << std::endl;
        std::cout << "Previous Hash: " << currentBlock.getPrevHash() << std::endl;
    }
}



std::vector<Block> Blockchain::getChain(){
    return chain;
}

Block *Blockchain::getLatestBlock(){
    return &chain.back();
}