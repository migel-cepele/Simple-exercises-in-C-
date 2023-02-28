#include <iostream>
#include <random>
#include <iomanip>
#include <ctime>
using namespace std;

int main() {
    // use the default random-number generation engine to
// produce uniformly distributed pseudorandom int values from 1 to 6
default_random_engine engine{static_cast<unsigned int>(time(0))};
uniform_int_distribution<unsigned int> randomInt{0, 9};

for(int i = 0; i < 10; i++) {

    int pergjigja;
    int numri_1 = randomInt(engine);
    int numri_2 = randomInt(engine);
    cout << "Shkruaj pergjigjen e : " << numri_1 << " * " << numri_2 << endl;
    int pergjigja_sakte = numri_1 * numri_2;
    
    do
    {
        cout << "Shkruaj pergjigjen vks" << endl;
        cin >> pergjigja;
        if (pergjigja != pergjigja_sakte) {
            cout << "Jeni nje vk i gabuar, provoni perseri" << endl;        }

    } while (pergjigja != pergjigja_sakte );
    

}
cout << "Bravo, jeni nje vks qe di aritmetike primitive!" << endl;


    
}