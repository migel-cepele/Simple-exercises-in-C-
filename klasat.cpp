#include <string>
#include <iostream>
using namespace std;


class libri{
public:
    string titulli;
    int cmimi;
    int sasia;
    void shitje();
    void shtepia_botuese();
    libri(string, int, int, string);
    ~libri();
private: string botuesi;

};

libri::libri(string emri_titullit, int p, int sasia_librave, string emri_botuesit) {
    titulli = emri_titullit;
    cmimi = p;
    sasia = sasia_librave;
    botuesi = emri_botuesit;
    
    cout << "Ekzekutimi i konstruktorit" << titulli << "mbaroi" << endl;
}

libri::~libri() {
    cout << "ekzekutimi i destruktorit" << titulli << "mbaroi" << endl;
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

int main() {
    static libri s = libri("robqiri", 500, 50, "pithrobi");
    
    libri l{"bukuroshja", 300, 20, "pegi"};
    l.shitje();
    l.shtepia_botuese();


}

