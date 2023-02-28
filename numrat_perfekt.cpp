#include <iostream>
using namespace std;

bool numer_perfect(int n) {
    unsigned int sum = 0;
    
    for (int i = 1; i <= n/2; i++) {
        if (n % i == 0) {
            sum = sum + i;
        }
    }

    if (sum == n) {
        return true;
    }else {

        return false;  
    }
    
}

void numrat_perfekt_500() {
    unsigned int numeratori = 0;

    for (int i = 2; i < 500; i++) {
        if (numer_perfect(i) == 1) {
            numeratori = numeratori + 1;
            
            
        }

        
    }
    cout << numeratori;
}

int main() {
   numrat_perfekt_500();

    
}