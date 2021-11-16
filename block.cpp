#include "block.h"

Block::Block(int idx, transaction d, std::string pHash){
    prevHash=pHash;
    index=idx;
    data=d;
    blockHash=GenerateHash();
}

std::string Block::GenerateHash(){
    return sha256(data.senderKey+data.recieverKey+std::to_string(data.amount)+std::to_string(data.timestamp));
}

std::string Block::getHash(){
    return blockHash;
}

std::string Block::getPrevHash(){
    return prevHash;
}

int Block::getIndex(){
    return index;
}

void Block::printTransaction(){
    std::cout << "Sender Key: " << data.senderKey << "\nReciever Key: " << data.recieverKey << "\nAmount: " << data.amount << "\nTimestamp: " << data.timestamp << std::endl; 
}