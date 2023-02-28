#include <iostream>
#include <array>
using namespace std;

int main() {
    long double shuma = 0.0, a = 4, b = 1, x = 1.0, n;
    cout << "Shkruaj nr e termave te vargut: " << endl;
    cin >> n;

    for(int i = 0; i < n; i++) {
        shuma = shuma + (a * b/x);
        x = x + 2;
        b = -b;

        if(shuma == 3.14159) {
            cout << i << endl;
            break;
            
        }
    }
    cout << "Shuma e n termave te pare eshte: " << shuma;
   

   
    return 0;
}