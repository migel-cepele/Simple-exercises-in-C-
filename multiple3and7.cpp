#include <iostream>
using namespace std;

int main() {
    int x;

    cout << "Vendosni nje numer:";
    cin >> x;
    

    if (x % 21 == 0) {
        cout << x << " eshte shumefishe i nr. 7 dhe i nr.3";
    } 
    else if (x % 3 == 0)
    {
        cout << x << " eshte shumefish i nr. 3";
        
    }

    else if (x % 7 == 0) {
        cout << x << " eshte shumefish i nr.7";

    } 
    else {
        cout << x << " eshte nr vk";

    }
}