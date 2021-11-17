#include "block.h"

Block::Block(int idx, transaction d, std::string pHash){
    prevHash=pHash;
    index=idx;
    data=d;
    blockHash=GenerateHash();
}

std::string Block::GenerateHash(){
    return sha256(data.senderKey+data.recieverKey+std::to_string(data.amount)+std::to_string(data.timestamp)+prevHash);
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

/*void Block::MineBlock(uint32_t difficulty){
    char zeroString[difficulty+1];
    for(uint32_t i=0;i<difficulty;i++){
        zeroString[i]='0';
    }
    std::string tempString str(zeroString);
    zeroString[difficulty]='\0';
    while(blockHash.substr(0,difficulty)!=tempString){
        //nonce++
        //calculate hash with new nonce
    }
}*/

bool Block::isHashValid(){
    return GenerateHash() == getHash();
}