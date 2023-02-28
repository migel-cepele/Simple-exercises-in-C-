#include <libri.h>
#include <string>
#include <iostream>
using namespace std;





libri::libri(string emri_titullit, int p, int sasia_librave, string emri_botuesit) {
    titulli = emri_titullit;
    cmimi = p;
    sasia = sasia_librave;
    botuesi = emri_botuesit;
    
}

void libri::shitje() {
    int gjendja = sasia;
    if (gjendja != 0) {
        cout << "jane te disponueshem: " << gjendja << " libra" << endl;
    } else {
        cout << "Nuk ka libra" << endl;
    }

}

void libri::shtepia_botuese() {
    string emri = botuesi;
    cout << "Emri i shtepise botuese eshte: " << emri << endl;
}