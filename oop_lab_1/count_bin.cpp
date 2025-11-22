#include "count_bin.h"

int count_bin(int a, int b) {
    if (a < 0 || b < 0 || a > b) {
        return -1;
    }
    
    int edinichki = 0;
    
    for (int i = a; i <= b; i++) {
        int n = i;
        while (n > 0) {
            if (n & 1) {
                edinichki++;
            }
            n >>= 1;
        }
    }
    
    return edinichki;
}