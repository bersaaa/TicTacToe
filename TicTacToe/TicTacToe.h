#ifndef TicTacToe_H
#define TicTacToe_H

#include <iostream>
using namespace std;
class oyun
{
	public:
		
		oyun();
		void pano_ciz(char pano[4][4]);
		void oyna(char pano[4][4],char oyuncu);
		char gecis(char oyuncu);
		char kontrol(char pano[4][4],char oyuncu);
		void Analiz_Yap(char pano[][4]);
		void printAnaliz();
		
	   
	   friend ostream& operator<<(ostream& os,const oyun & oyuncu);
	   
    private:
	    
		char pano[4][4];
		char oyuncu;
		
		float satir_X;
	    float sutun_X;
	    float kosegen_X;
	    float satir_O;
	    float sutun_O;
	    float kosegen_O;
		
			
};




#endif
