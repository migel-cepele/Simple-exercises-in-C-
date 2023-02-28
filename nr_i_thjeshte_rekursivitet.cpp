#include <iostream>
#include <bits/stdc++.h>

using namespace std;


bool is_prime(int n, int i = 2) {
    if (n <= 2) 
        return (n == 2) ? true : false; 
    if (n % i == 0) 
        return false; 
    if (i >= n/2) 
        return true;
        

    
    return is_prime(n, i + 1);
    

    

}

int main() {

    if (is_prime(10)) {
        cout << "si";
    } else {
        cout << "vk";
    }

    return 0;
    
}