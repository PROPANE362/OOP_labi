#include <iostream>
#include "count_bin.h"
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    
    int rez = count_bin(a, b);
    
    cout << rez;
    
    return 0;
}