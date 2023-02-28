#include <iostream>
using namespace std;

int main() {
    
    int a[] = {1, 5, 2, 4, 8, 69, 5, 7, 15987};

    for(int i = 0; i < sizeof(a)/sizeof(a[0]); i++) {
        if(a[i] == 5 && a[i+1] == 7) {
            a[i+1] = 1;
        }
    }
    for(int i = 0; i < sizeof(a)/sizeof(a[0]); i++) {
        cout << a[i] << " ";
    }

    return 0;
}