#include "block.h"

Block::Block(int idx, transaction d, std::string pHash){
    prevHash=pHash;
    index=idx;
    data=d;
    blockHash=GenerateHash();
}

std::string Block::GenerateHash(){
    return sha256(std::to_string(data.amount));
}

std::string Block::getHash(){
    return blockHash;
}

std::string Block::getPrevHash(){
    return prevHash;
}