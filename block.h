#ifndef BLOCK_H
#define BLOCK_H
#include <cstdint>
#include <iostream>
#include <sstream>
#include "sha256.h"
#include "transaction.h"

class Block {
public:
    


    Block(int idx, transaction d, std::string pHash);

    std::string getHash();
    std::string getPrevHash();
    int getIndex();
    void printTransaction();
    bool isHashValid();


    void MineBlock(uint32_t difficulty);
private:
    int index;
    //int nonce; //used in mining
    transaction data;
    std::string blockHash;
    std::string prevHash;
    std::string GenerateHash();


};

#endif