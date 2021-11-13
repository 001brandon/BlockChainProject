#ifndef SHA256_H
#define SHA256_H

#include <openssl/sha.h>
#include <iostream>
#include <iostream>
#include <iomanip>
#include <sstream>
#include <string>

std::string sha256(const std::string str);

#endif