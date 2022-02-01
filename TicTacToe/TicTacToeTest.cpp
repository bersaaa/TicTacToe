#include "TicTacToe.h"
#include <iostream>

using namespace std;


int main()
{

    oyun game;

    char Pano[4][4] = {{'a','b','c','d'},{'e','f','g','h'},{'i','j','k','l'},{'m','n','p','s'}};
    char player = 'X';
    char tekrar;
    char kazanan = 'n';

    while(kazanan == 'n')
    {
        game.pano_ciz(Pano);
        game.oyna( Pano,player);
        kazanan = game.kontrol(Pano,player);

        if(kazanan == 'n')
        {
            player = game.gecis(player);
        }
    }

    game.pano_ciz(Pano);
    game.Analiz_Yap(Pano);
    game.printAnaliz();
    cout<<endl<<endl;


    return(0);
}


