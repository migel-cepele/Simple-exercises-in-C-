#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int rolldice() {
    int zari1 = 1 + rand() % 6;
    int zari2 = 1 + rand() % 6;
    int sum = zari1 + zari2;

    cout << "Shuma e pikeve qe mori lojtari eshte " << sum << endl;
    return sum;
}



int main() {

    enum class Status {CONTINUE , won, lost}; //GJENDJA E LOJES

    srand(static_cast< int>(time(0)));

    int piketeMia = 0;
    Status gjendjaLojes;
    int shumaPikeve = rolldice();

    switch (shumaPikeve)
    {
    case 7: 
    case 11:
    gjendjaLojes = Status::won;
        break;
    case 2:
    case 3:
    case 12:
    gjendjaLojes = Status::lost;

    default:
    gjendjaLojes = Status::CONTINUE;
    piketeMia = shumaPikeve;
    cout << "Piket e mia jane: " << piketeMia << endl;
        break;
    }

    while (Status::CONTINUE == gjendjaLojes) {
        shumaPikeve = rolldice();

        if (shumaPikeve == 7) {
            gjendjaLojes = Status::lost;
            
        } else {
            if (shumaPikeve == piketeMia) {
                gjendjaLojes = Status::won;
                
            }


        }
            
    }

    if (gjendjaLojes == Status::won)
    cout << "Lojtari fiton" << endl;
    else
    cout << "Lojtari humbet" << endl;
   
    




    return 0;
}