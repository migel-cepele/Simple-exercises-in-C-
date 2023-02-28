#include <iostream>
using namespace std;

int main() {
    int s, t, a, b;
    int apples[] = {0, 0, 0}; 
    int oranges[] = {0, 0, 0};
    
    int molle = 0, portokall = 0;
    cout << "vendosni vlerat ku fillon dhe mbaron shtepia: " << endl;
    cin >> s >> t;
    cout << "vendosni pikat ku jane pemet e molles dhe dardhes: " << endl;
    cin >> a >> b;
    
    for (int i = 0; i < 3; i++) {
        cout << "vendosni mollet qe kane rene: " << endl;
        cin >> apples[i];
    }
    
    for (int j = 0; j < 3; j++) {
        cout << "vendosni dardhat qe kane rene: " << endl;
        cin >> oranges[j];
    }
    
    for(int i = 0; i < sizeof(apples)/sizeof(apples[0]); i++) {
        if ( s <= apples[i] + a && apples[i] + a <= t ) {
            molle = molle + 1;
        }
    }
    cout << molle<< endl;
    for(int j = 0; j < sizeof(oranges)/sizeof(oranges[0]); j++) {
        if (s <= oranges[j] + b && oranges[j] + b <= t) {
            portokall = portokall + 1;
            
            
        }
    }
    cout << portokall << endl;

    return 0;
}