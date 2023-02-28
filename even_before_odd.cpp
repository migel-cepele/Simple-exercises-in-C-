#include <iostream>
#include <array>
using namespace std;

int main() {
    int a[] = {1, 2, 5, 8, 9, 56, 79, 958};

    int size = sizeof(a)/sizeof(a[0]);
    int indeks = 0;
    for(int i = 0; i < size; i++) {
        
        if(a[i] % 2 == 0){

            int kot = a[indeks];
            a[indeks] = a[i];
            a[i] = kot;
            
            indeks++;
        }
    }
    for (int i; i < size; i++) {
        cout << a[i] << " "<< endl;

    }
   
    return 0;
}