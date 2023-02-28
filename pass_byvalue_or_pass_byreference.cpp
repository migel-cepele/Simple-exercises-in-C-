#include <iostream>
using namespace std;

int pass_by_value(int n) {

    n = n * n * n;
    return n;
}
int pass_by_reference(int& n) {
    n = n * n * n;
    return n;
}
int main() {
    int count = 4;
    
    cout << pass_by_value(count) << endl;
    cout << count << endl;
    cout << pass_by_reference(count) << endl;
    cout << count << endl;
      
    
}