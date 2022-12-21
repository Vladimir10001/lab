#include "Encoder.h"
#include "ASCIIEncoder.h"

string ASCIIEncoder::encode(string& teqst, int& a) {
    string encoded;
    for (int i = 0; i < teqst.length(); i++) {
        encoded += teqst[i] + a;
    }
    return encoded;
}

string ASCIIEncoder::decode(string& teqst, int& a) {
    string decoded;
    for (int i = 0; i < teqst.length(); i++) {
        decoded += teqst[i] - a;
    }
    return decoded;
}
