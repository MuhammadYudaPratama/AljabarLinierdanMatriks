//Muhammad Yuda Pratama_21091397025

#include <iostream>
#include <conio.h>
using namespace std;

int main() {

	int i, j, jumlah_baris, jumlah_kolom, skalar, matriksA[10][10], hasil[10][10];
  
	cout << " --PROGRAM PERKALIAN SKALAR MATRIKS--" << endl;
	cout << "=====================================" << endl;
	cout << " Jumlah baris matriks : "; cin >> jumlah_baris;
	cout << " Jumlah kolom matriks : "; cin >> jumlah_kolom;
	
	cout << endl;
	cout << " Masukkan Nilai Pengali : "; cin >> skalar;
  	cout << " Matriks A : \n";
	for(i=0; i<jumlah_baris; i++){
		for(j=0; j<jumlah_kolom; j++){
      		cin>>matriksA[i][j];
    	}
  	}
  	cout<<" Hasil Pengurangan Matriks : \n";
  	for(i=0; i<jumlah_baris; i++){
    	for(j=0; j<jumlah_kolom; j++){
      		hasil[i][j]=skalar*matriksA[i][j];
      		cout<<hasil[i][j]<<"\t";
    	}
    cout<<endl;
	}
  
	getch();
	return 0;
}
