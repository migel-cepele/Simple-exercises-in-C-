#include "libri.h"

#include <string>
#include <iostream>
using namespace std;

int main() {
    libri l("bukuroshja", 300, 20, "pegi");
    l.shitje();
    l.shtepia_botuese();
}