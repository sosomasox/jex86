#include <iostream>

#include "../include/decoder.h"


int Decoder::decode(Emulator* emulator) {
    switch(emulator->head) {
        case 0x89:
        case 0xb8:
        case 0xb9:
        case 0xba:
        case 0xbb:
        case 0xbc:
        case 0xbd:
        case 0xbe:
        case 0xbf:
        case 0xe9:
            return 0;

        default:
            return -1;
    }

}
