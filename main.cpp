#include <iostream>
#include "lib.h"
using namespace std;
int main() {
    int  n=0;

    do {
        cin >> n;
    }while (n<1);
    
    if (numeri_primi(n)){
        cout << "numero primo" << endl;
    }else{
        cout << "numero non primo" << endl;
    }
}
