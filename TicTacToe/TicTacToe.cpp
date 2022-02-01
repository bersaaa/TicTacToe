#include "TicTacToe.h"
#include <iostream>

using namespace std;

oyun::oyun(){
	//Default constructor ile tahtan?n boyutu ve i?eri?i ayr?ca ilk oyuncunun kim olaca?? belirtilmi?tir.
	char Pano[4][4] = {{'a','b','c','d'},{'e','f','g','h'},{'i','j','k','l'},{'m','n','p','s'}};
	char oyuncu='X';
}

void oyun::pano_ciz(char pano[][4]){
	
	//Her hamle sonras?nda oyun panosunu tekrar tekrar ba?tan ?izer eklenen hamleyi g?stererek.
	
	cout<<endl<<endl;
	cout << "  Player 1 (X) - Player 2 (O)- Player 3 (x)- Player 4 (o)" <<endl;

    cout << "    _______________________"<<endl;
    cout << "   |     |     |     |     |" <<endl;
    cout << "   |  " << pano[0][0] << "  |  " << pano[0][1] << "  |  " << pano[0][2] <<"  |  " << pano[0][3] <<"  |  "<<endl;
    cout << "   |_____|_____|_____|_____|" << endl;
    cout << "   |     |     |     |     |" << endl;
    cout << "   |  " << pano[1][0] << "  |  " << pano[1][1] << "  |  " << pano[1][2] <<"  |  " << pano[1][3]<<"  |  " <<endl;
    cout << "   |_____|_____|_____|_____|" << endl;
    cout << "   |     |     |     |     |" << endl;
    cout << "   |  " << pano[2][0] << "  |  " << pano[2][1] << "  |  " << pano[2][2] <<"  |  " << pano[2][3] <<"  |  "<<endl;  
    cout << "   |_____|_____|_____|_____|" <<endl;
    cout << "   |     |     |     |     |" <<endl;
    cout << "   |  " << pano[3][0] << "  |  " << pano[3][1] << "  |  " << pano[3][2] <<"  |  " << pano[3][3] <<"  |  "<< endl;
    cout << "   |_____|_____|_____|_____|" <<endl;
    
    cout<<endl<<endl;


}

void oyun::oyna(char pano[][4],char oyuncu){
	
	//Girilen hamlenin daha ?nceden oynanm?? bir yerde olup olmad???n? kontrol eden fonksiyon.
	bool oyuncu_hareketi_bulundu = false;
    char oyuncu_donusumu = '0';
    char oyuncu_hareketi = '0';

    if(oyuncu == 'X')
    {
        oyuncu_donusumu = '1';
    }
    else if(oyuncu=='O')
    {
        oyuncu_donusumu = '2';
    }
    else if(oyuncu=='x')
	{
		oyuncu_donusumu='3';
	}
	else 
	{
		oyuncu_donusumu='4';
	}


    while(oyuncu_hareketi_bulundu == false)
    {
        cout <<"   "<< oyuncu_donusumu <<". oyuncu hamle yapabilirsin."<< endl;
        cin >> oyuncu_hareketi;

        for(int i = 0; i < 4; i++)
        {
        	for(int j=0;j<4;j++){
			
            if(oyuncu_hareketi == pano[i][j] && oyuncu_hareketi != 'X' && oyuncu_hareketi != 'O' && oyuncu_hareketi != 'x' && oyuncu_hareketi != 'o')
            {
                pano[i][j] = oyuncu;

                oyuncu_hareketi_bulundu = true;
            }
          }
        }
        if(oyuncu_hareketi_bulundu == false)
        {
            cout << "  Hamle yaptigin yer dolu..." << endl<<"  Baska bir yer adini yaz: "<<endl;
        }
    }
}

char oyun::gecis(char oyuncu){
	
//Oyuncular aras?ndaki d?n???m? sa?lar yani oyuncular? s?ras?yla  de?i?tirir.
	
	if(oyuncu=='X')
	{
	 	oyuncu='O';
   }
    else if(oyuncu=='O')
	{
	 	oyuncu='x';
	}
	else if(oyuncu=='x')
	{
	    oyuncu='o';	
	}
	else 
	{
	 	oyuncu='X';
	}

    return(oyuncu);
}


char oyun::kontrol(char pano[][4],char oyuncu)
{   
    //Kazanma ihtimallerini kontrol eder ve kazanan? ekrana yazd?r?r.
    
    char kazanan_oyuncu = 'n';
    
     int test_et = 0;
     //1.takim kazanma durumlari
    
    if (pano[0][0] == 'X' && pano[0][1] == 'X' && pano[0][2] == 'x' && pano[0][3] == 'x')
        kazanan_oyuncu=oyuncu;
    if (pano[1][0] == 'X' && pano[1][1] == 'X' && pano[1][2] == 'x' && pano[1][3] == 'x')
        kazanan_oyuncu=oyuncu;
    if (pano[2][0] == 'X' && pano[2][1] == 'X' && pano[2][2] == 'x' && pano[2][3] == 'x')
        kazanan_oyuncu=oyuncu;
    if (pano[3][0] == 'X' && pano[3][1] == 'X' && pano[3][2] == 'x' && pano[3][3] == 'x')
        kazanan_oyuncu=oyuncu;
    if (pano[0][0] == 'x' && pano[0][1] == 'x' && pano[0][2] == 'X' && pano[0][3] == 'X')
        kazanan_oyuncu=oyuncu;
    if (pano[1][0] == 'x' && pano[1][1] == 'x' && pano[1][2] == 'X' && pano[1][3] == 'X')
        kazanan_oyuncu=oyuncu;
    if (pano[2][0] == 'x' && pano[2][1] == 'x' && pano[2][2] == 'X' && pano[2][3] == 'X')
        kazanan_oyuncu=oyuncu;
    if (pano[3][0] == 'x' && pano[3][1] == 'x' && pano[3][2] == 'X' && pano[3][3] == 'X')
        kazanan_oyuncu=oyuncu;
    if (pano[0][0] == 'X' && pano[0][1] == 'x' && pano[0][2] == 'x' && pano[0][3] == 'X')
        kazanan_oyuncu=oyuncu;
    if (pano[1][0] == 'X' && pano[1][1] == 'x' && pano[1][2] == 'x' && pano[1][3] == 'X')
        kazanan_oyuncu=oyuncu;
    if (pano[2][0] == 'X' && pano[2][1] == 'x' && pano[2][2] == 'x' && pano[2][3] == 'X')
        kazanan_oyuncu=oyuncu;
    if (pano[3][0] == 'X' && pano[3][1] == 'x' && pano[3][2] == 'x' && pano[3][3] == 'X')
        kazanan_oyuncu=oyuncu;
    if (pano[0][0] == 'x' && pano[0][1] == 'X' && pano[0][2] == 'X' && pano[0][3] == 'x')
        kazanan_oyuncu=oyuncu;
    if (pano[1][0] == 'x' && pano[1][1] == 'X' && pano[1][2] == 'X' && pano[0][3] == 'x')
        kazanan_oyuncu=oyuncu;
    if (pano[2][0] == 'x' && pano[2][1] == 'X' && pano[2][2] == 'X' && pano[2][3] == 'x')
        kazanan_oyuncu=oyuncu;
    if (pano[3][0] == 'x' && pano[3][1] == 'X' && pano[3][2] == 'X' && pano[3][3] == 'x')
        kazanan_oyuncu=oyuncu;
    if (pano[0][0] == 'X' && pano[1][0] == 'X' && pano[2][0] == 'x' && pano[3][0] == 'x')
        kazanan_oyuncu=oyuncu;
    if (pano[0][1] == 'X' && pano[1][1] == 'X' && pano[2][1] == 'x' && pano[3][1] == 'x')
        kazanan_oyuncu=oyuncu;
    if (pano[0][2] == 'X' && pano[1][2] == 'X' && pano[2][2] == 'x' && pano[3][2] == 'x')
        kazanan_oyuncu=oyuncu;
    if (pano[0][3] == 'X' && pano[1][3] == 'X' && pano[2][3] == 'x' && pano[3][3] == 'x')
        kazanan_oyuncu=oyuncu;
    if (pano[0][0] == 'x' && pano[1][0] == 'x' && pano[2][0] == 'X' && pano[3][0] == 'X')
        kazanan_oyuncu=oyuncu;
    if (pano[0][1] == 'x' && pano[1][1] == 'x' && pano[2][1] == 'X' && pano[3][1] == 'X')
        kazanan_oyuncu=oyuncu;
    if (pano[0][2] == 'x' && pano[1][2] == 'x' && pano[2][2] == 'X' && pano[3][2] == 'X')
        kazanan_oyuncu=oyuncu;
    if (pano[0][3] == 'x' && pano[1][3] == 'x' && pano[2][3] == 'X' && pano[3][3] == 'X')
        kazanan_oyuncu=oyuncu;
    if (pano[0][0] == 'X' && pano[1][0] == 'x' && pano[2][0] == 'x' && pano[3][0] == 'X')
        kazanan_oyuncu=oyuncu;
    if (pano[0][1] == 'X' && pano[1][1] == 'x' && pano[2][1] == 'x' && pano[3][1] == 'X')
        kazanan_oyuncu=oyuncu;
    if (pano[0][2] == 'X' && pano[1][2] == 'x' && pano[2][2] == 'x' && pano[3][2] == 'X')
        kazanan_oyuncu=oyuncu;
    if (pano[0][3] == 'X' && pano[1][3] == 'x' && pano[2][3] == 'x' && pano[3][3] == 'X')
        kazanan_oyuncu=oyuncu;
    if (pano[0][0] == 'x' && pano[1][0] == 'X' && pano[2][0] == 'X' && pano[3][0] == 'x')
        kazanan_oyuncu=oyuncu;
    if (pano[0][1] == 'x' && pano[1][1] == 'X' && pano[2][1] == 'X' && pano[3][1] == 'x')
        kazanan_oyuncu=oyuncu;
    if (pano[0][2] == 'x' && pano[1][2] == 'X' && pano[2][2] == 'X' && pano[3][2] == 'x')
        kazanan_oyuncu=oyuncu;
    if (pano[0][3] == 'x' && pano[1][3] == 'X' && pano[2][3] == 'X' && pano[3][3] == 'x')
        kazanan_oyuncu=oyuncu;
    if (pano[0][0] == 'X' && pano[1][1] == 'X' && pano[2][2] == 'x' && pano[3][3] == 'x')
        kazanan_oyuncu=oyuncu;
    if (pano[0][0] == 'x' && pano[1][1] == 'x' && pano[2][2] == 'X' && pano[3][3] == 'X')
        kazanan_oyuncu=oyuncu;
    if (pano[0][0] == 'X' && pano[1][1] == 'x' && pano[2][2] == 'x' && pano[3][3] == 'X')
        kazanan_oyuncu=oyuncu;
    if (pano[0][0] == 'x' && pano[1][1] == 'X' && pano[2][2] == 'X' && pano[3][3] == 'x')
        kazanan_oyuncu=oyuncu;
    if (pano[0][3] == 'X' && pano[1][2] == 'X' && pano[2][1] == 'x' && pano[3][0] == 'x')
        kazanan_oyuncu=oyuncu;
    if (pano[0][3] == 'x' && pano[1][2] == 'x' && pano[2][1] == 'X' && pano[3][0] == 'X')
       kazanan_oyuncu=oyuncu;
    if (pano[0][3] == 'X' && pano[1][2] == 'x' && pano[2][1] == 'x' && pano[3][0] == 'X')
       kazanan_oyuncu=oyuncu;
    if (pano[0][3] == 'x' && pano[1][2] == 'X' && pano[2][1] == 'X' && pano[3][0] == 'x')
        kazanan_oyuncu=oyuncu;


    //2. takim kazanma durumlari
    
    if (pano[0][0] == 'O' && pano[0][1] == 'O' && pano[0][2] == 'o' && pano[0][3] == 'o')
        kazanan_oyuncu=oyuncu;
    if (pano[1][0] == 'O' && pano[1][1] == 'O' && pano[1][2] == 'o' && pano[1][3] == 'o')
        kazanan_oyuncu=oyuncu;
    if (pano[2][0] == 'O' && pano[2][1] == 'O' && pano[2][2] == 'o' && pano[2][3] == 'o')
        kazanan_oyuncu=oyuncu;
    if (pano[3][0] == 'O' && pano[3][1] == 'O' && pano[3][2] == 'o' && pano[3][3] == 'o')
        kazanan_oyuncu=oyuncu;
   if (pano[0][0] == 'o' && pano[0][1] == 'o' && pano[0][2] == 'O' && pano[0][3] == 'O')
        kazanan_oyuncu=oyuncu;
    if (pano[1][0] == 'o' && pano[1][1] == 'o' && pano[1][2] == 'O' && pano[1][3] == 'O')
        kazanan_oyuncu=oyuncu;
    if (pano[2][0] == 'o' && pano[2][1] == 'o' && pano[2][2] == 'O' && pano[2][3] == 'O')
        kazanan_oyuncu=oyuncu;
    if (pano[3][0] == 'o' && pano[3][1] == 'o' && pano[3][2] == 'O' && pano[3][3] == 'O')
        kazanan_oyuncu=oyuncu;
    if (pano[0][0] == 'O' && pano[0][1] == 'o' && pano[0][2] == 'o' && pano[0][3] == 'O')
        kazanan_oyuncu=oyuncu;
    if (pano[1][0] == '1' && pano[1][1] == 'o' && pano[1][2] == 'o' && pano[1][3] == 'O')
        kazanan_oyuncu=oyuncu;
    if (pano[2][0] == 'O' && pano[2][1] == 'o' && pano[2][2] == 'o' && pano[2][3] == 'O')
        kazanan_oyuncu=oyuncu;
    if (pano[3][0] == 'O' && pano[3][1] == 'o' && pano[3][2] == 'o' && pano[3][3] == 'O')
        kazanan_oyuncu=oyuncu;
    if (pano[0][0] == 'o' && pano[0][1] == 'O' && pano[0][2] == 'O' && pano[0][3] == 'o')
        kazanan_oyuncu=oyuncu;
    if (pano[1][0] == 'o' && pano[1][1] == 'O' && pano[1][2] == 'O' && pano[0][3] == 'o')
        kazanan_oyuncu=oyuncu;
    if (pano[2][0] == 'o' && pano[2][1] == 'O' && pano[2][2] == 'O' && pano[2][3] == 'o')
        kazanan_oyuncu=oyuncu;
    if (pano[3][0] == 'o' && pano[3][1] == 'O' && pano[3][2] == 'O' && pano[3][3] == 'o')
        kazanan_oyuncu=oyuncu;
    if (pano[0][0] == 'O' && pano[1][0] == 'O' && pano[2][0] == 'o' && pano[3][0] == 'o')
        kazanan_oyuncu=oyuncu;
    if (pano[0][1] == 'O' && pano[1][1] == 'O' && pano[2][1] == 'o' && pano[3][1] == 'o')
        kazanan_oyuncu=oyuncu;
    if (pano[0][2] == 'O' && pano[1][2] == 'O' && pano[2][2] == 'o' && pano[3][2] == 'o')
        kazanan_oyuncu=oyuncu;
    if (pano[0][3] == 'O' && pano[1][3] == 'O' && pano[2][3] == 'o' && pano[3][3] == 'o')
        kazanan_oyuncu=oyuncu;
    if (pano[0][0] == 'o' && pano[1][0] == 'o' && pano[2][0] == 'O' && pano[3][0] == 'O')
        kazanan_oyuncu=oyuncu;
    if (pano[0][1] == 'o' && pano[1][1] == 'o' && pano[2][1] == 'O' && pano[3][1] == 'O')
        kazanan_oyuncu=oyuncu;
    if (pano[0][2] == 'o' && pano[1][2] == 'o' && pano[2][2] == 'O' && pano[3][2] == 'O')
        kazanan_oyuncu=oyuncu;
    if (pano[0][3] == 'o' && pano[1][3] == 'o' && pano[2][3] == 'O' && pano[3][3] == 'O')
        kazanan_oyuncu=oyuncu;
    if (pano[0][0] == 'O' && pano[1][0] == 'o' && pano[2][0] == 'o' && pano[3][0] == 'O')
        kazanan_oyuncu=oyuncu;
    if (pano[0][1] == 'O' && pano[1][1] == 'o' && pano[2][1] == 'o' && pano[3][1] == 'O')
        kazanan_oyuncu=oyuncu;
    if (pano[0][2] == 'O' && pano[1][2] == 'o' && pano[2][2] == 'o' && pano[3][2] == 'O')
        kazanan_oyuncu=oyuncu;
    if (pano[0][3] == 'O' && pano[1][3] == 'o' && pano[2][3] == 'o' && pano[3][3] == 'O')
        kazanan_oyuncu=oyuncu;
    if (pano[0][0] == 'o' && pano[1][0] == 'O' && pano[2][0] == 'O' && pano[3][0] == 'o')
        kazanan_oyuncu=oyuncu;
    if (pano[0][1] == 'o' && pano[1][1] == 'O' && pano[2][1] == 'O' && pano[3][1] == 'o')
        kazanan_oyuncu=oyuncu;
    if (pano[0][2] == 'o' && pano[1][2] == 'O' && pano[2][2] == 'O' && pano[3][2] == 'o')
        kazanan_oyuncu=oyuncu;
    if (pano[0][3] == 'o' && pano[1][3] == 'O' && pano[2][3] == 'O' && pano[3][3] == 'o')
        kazanan_oyuncu=oyuncu;
    if (pano[0][0] == 'O' && pano[1][1] == 'O' && pano[2][2] == 'o' && pano[3][3] == 'o')
        return '0';
    if (pano[0][0] == 'o' && pano[1][1] == 'o' && pano[2][2] == 'O' && pano[3][3] == 'O')
        kazanan_oyuncu=oyuncu;
    if (pano[0][0] == 'O' && pano[1][1] == 'o' && pano[2][2] == 'o' && pano[3][3] == 'O')
        kazanan_oyuncu=oyuncu;
    if (pano[0][0] == 'o' && pano[1][1] == 'O' && pano[2][2] == 'O' && pano[3][3] == 'o')
        kazanan_oyuncu=oyuncu;
    if (pano[0][3] == 'O' && pano[1][2] == 'O' && pano[2][1] == 'o' && pano[3][0] == 'o')
        kazanan_oyuncu=oyuncu;
    if (pano[0][3] == 'o' && pano[1][2] == 'o' && pano[2][1] == 'O' && pano[3][0] == 'O')
        kazanan_oyuncu=oyuncu;
    if (pano[0][3] == 'O' && pano[1][2] == 'o' && pano[2][1] == 'o' && pano[3][0] == 'O')
        kazanan_oyuncu=oyuncu;
    if (pano[0][3] == 'o' && pano[1][2] == 'O' && pano[2][1] == 'O' && pano[3][0] == 'o')
        kazanan_oyuncu=oyuncu;
	
	//Beraberelik
	else {
		for(int i = 0; i < 4; i++)
	   {
	   	for(int j=0;j<4;j++){
		   
            if(pano[i][j] == 'x' || pano[i][j] == 'X' || pano[i][j] == 'o'  || pano[i][j] == 'O')
		   {
               test_et++;
            }
        }
        }
        
        if(test_et == 16)
	   {
           kazanan_oyuncu = 't';
        }
	}	
		  
	
	if(kazanan_oyuncu == oyuncu){
     
	   if(oyuncu == 'X')
	   {
           cout << endl << "  Tebrikler 1.takim kazaniniz!" <<endl;
        }
       else if(oyuncu == 'x')
	   {
            cout << endl << "  Tebrikler 1.takim kazaniniz!" <<endl;
        }   
       else if(oyuncu=='O')
	   {
            cout << endl << " Tebrikler 2. takim kazandiniz!" <<endl;
        }
       else if(oyuncu=='o')
	   {
           cout << endl << " Tebrikler 2. takim kazandiniz!" <<endl;
        }  
    }
    else if(kazanan_oyuncu == 't')
	{
        cout << "  Berabere!!!" <<endl;
    }

   
    return(kazanan_oyuncu);
}


	
ostream& operator<<(ostream& os,const oyun& oyuncu)
{
	//private de olan nesneleri ekrana yazd?rmakta kullan?lan friend overloading fonksiyonudur.
	
    os << oyuncu.oyuncu<< " oyuncui Analizi <=============================================="<<endl;
	os<< "Satir orani: %" << oyuncu.satir_X*100 << endl;
	os<< "Sutun orani: %" << oyuncu.sutun_X*100 << endl;
	os<< "Kosegen orani: %" << oyuncu.kosegen_X*100 << endl;
	os<< "Satir orani: %" << oyuncu.satir_O*100 << endl;
	os<< "Sutun orani: %" << oyuncu.sutun_O*100 << endl;
	os<< "Kosegen orani: %" << oyuncu.kosegen_O*100 << endl;
} 
	
	
void oyun::Analiz_Yap(char pano[][4])
{
	
	int i,j,dolu=16,sayac1,sayac2;
	float sayac_X,sayac_O;
	
	//X icin satir analizi yapiyor.
	
	sayac2=0;
	dolu=4;
	sayac1=0;
	
	for (i=0;i<4;i++){
		for(j=0;j<4;j++){
			if(pano[i][j]=='X' || pano[i][j]=='x'){
				sayac1++;
			}
			if(pano[i][j]==' '){
				dolu--;
			}
		}
		if(dolu!=0){
			satir_X+=(sayac1*1.0)/dolu;
			sayac2++;
		}
	}
	satir_X = satir_X/sayac2;
	
	//O icin satir analizi yap?yor.
	
	sayac2=0;
	dolu=4;
	sayac1=0;
	
	for (i=0;i<4;i++){
		for(j=0;j<4;j++){
			if(pano[i][j]=='O' || pano[i][j]=='o'){
				sayac1++;
			}
			if(pano[i][j]==' '){
				dolu--;
			}
		}
		if(dolu!=0){
			satir_O+=(sayac1*1.0)/dolu;
			sayac2++;
		}
	}
	satir_O = satir_O/sayac2;
	
	
	
	//X icin s?tun analizi yap?yor.
	
	sayac2=0;
	dolu=4;
	sayac1=0;
	
	for (i=0;i<4;i++){
		for(j=0;j<4;j++){
			if(pano[j][i]=='X' || pano[j][i]=='x'){
				sayac1++;
			}
			if(pano[i][j]==' '){
				dolu--;
			}
		}
		if(dolu!=0){
			sutun_X+=(sayac1*1.0)/dolu;
			sayac2++;
		}
	}
	sutun_X=sutun_X/sayac2;
	
	//O icin s?tun analizi yap?yor.
	
	sayac2=0;
	dolu=4;
	sayac1=0;
	
	for (i=0;i<4;i++){
		for(j=0;j<4;j++){
			if(pano[j][i]=='O' || pano[j][i]=='o'){
				sayac1++;
			}
			if(pano[i][j]==' '){
				dolu--;
			}
		}
		if(dolu!=0){
			sutun_O+=(sayac1*1.0)/dolu;
			sayac2++;
		}
	}
	sutun_O=sutun_O/sayac2;
	
	//X icin kosegen analizi yapiyor.
	
	dolu=8;
	sayac_X=0;
	
	for (i=0;i<4;i++){
		if(pano[i][i]=='X' || pano[i][i]=='x'){
			sayac_X++;
		}
		if(pano[i][i]==' '){
			dolu--;
		}
	}
	for (i=0,j=3;i<4;i++,j--){
		if(pano[i][j]=='X' || pano[i][j]=='x'){
			sayac_X++;
		}
		if(pano[i][j]==' '){
			dolu--;
		}
	}
	if(dolu!=0){
		kosegen_X=(sayac_X*1.0)/dolu;
	}
	
	//O icin kosegen analizi yapiyor.
	dolu=8;
	sayac_O=0;
	for (i=0;i<4;i++){
		if(pano[i][i]=='O' || pano[i][i]=='o'){
			sayac_O++;
		}
		if(pano[i][i]==' '){
			dolu--;
		}
	}
	for (i=0,j=3;i<4;i++,j--){
		if(pano[i][j]=='O' || pano[i][j]=='o'){
			sayac_O++;
		}
		if(pano[i][j]==' '){
			dolu--;
		}
	}
	if(dolu!=0){
		kosegen_O=(sayac_O*1.0)/dolu;
	}
		
	}
	
	
void oyun::printAnaliz(){
	
	//Ekrana Analiz verilerini yazd?r?yor.
	 
	cout << " Takim "<<" | "<<" % Satir "<<" "<<" % Sutun "<<" "<<" % Kosegen"<<endl;
	cout<<  "________|________________________________________________"<<endl;
	cout<<  "  Xx   "<<" | "<<satir_X*100<<"         "<<sutun_X*100<<"       "<<kosegen_X*100<< endl;
	cout<<  "________|________________________________________________"<<endl;
	cout<<  "  Oo   "<<" | "<<satir_O*100<<"         "<<sutun_O*100<<"       "<<kosegen_O*100 << endl<<endl;
}

