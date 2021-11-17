#ifndef TRANSACTION_H
#define TRANSACTION_H

#include <iostream>

struct transaction{
    float amount;
    std::string senderKey;
    std::string recieverKey;
    time_t timestamp;
};

void createTransaction(std::string senderKey, std::string recieverKey, float amount);

#endif