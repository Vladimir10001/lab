#pragma once
#include <iostream>
#include "Encoder.h"
using namespace std;

class ASCIIEncoder : public Encoder
{
public:
    string encode(string& teqst, int& a);
    string decode(string& teqst, int& a);
};
