#include <iostream>
#include <array>
using namespace std;

void declaring () {
    int* ptr, p{5};             //astresiku dallon ptr si pointer por nuk ka efekt te variabla e dyte qe eshte int i thjeshte
    ptr = nullptr;
    cout << ptr << endl;
    
    ptr = &p;                   //operatori end para nje variable merr adresen e saj dhe ja jep pointerit(adress operator)
    cout << ptr << endl;

    cout << *ptr << endl;       // operatori astrisk akseson lvalue of ptr(operator diriferencial qe i referohet p ne kete rast)

    *ptr = 9;
    cout << p << endl;

}
 
void katrori (int* cptr) {    //pointer joconst me te dhena joconst
    *cptr = *cptr * *cptr;
    cout << *cptr << endl;
}

void nje( int* const pptr) {  //pointer konstant me te dhene jo konstante
    *pptr += 10;
    cout << *pptr;

}

void dy(const int* ptr) {  //pointer joconst me te dhena const
    cout << *ptr;
}

void tre(const int* const ptr) {  //pointer const me te dhena const
    cout << *ptr;


}

int main() {
    int x = 5;
    

    int a[5] = {1, 2, 3, 4, 5};

    int* aptr = a;
    cout << sizeof(x)<< endl;
    cout << sizeof(a) << endl;
    cout << *aptr << endl;         //aritmetika me pointer perdoret me shume per te aksesuar tabelat

    int* aptr1 = aptr + 2;
    x = aptr1 - aptr;
    cout << x << endl;

    int *vptr = (a + 3); 
    cout << *vptr << endl;

    for (size_t offset1 = 0; offset1 < 5; offset1++) {
        cout << *(a + offset1);

    }

    

    return 0;
}
