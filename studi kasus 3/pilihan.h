#include <iostream>
#include "makanan.h"


using namespace std;

void rumah :: pilihan(){
	for(int i = 1; i <= menu; ++i){
	cout << "\nSilahkan Pilih Menu Anda : ";
    cin >> pilih;
  
  if (pilih==1){
    cout << "1. Ayam Geprek : Rp21.000" << endl;
    harga=harga+21000;
    
  }
  else if(pilih==2){
    cout << "2. Ayam Goreng : Rp17.000" << endl;
    harga=harga+17000;
    
  }
  else if(pilih==3){
    cout << "3. Udang Goreng : Rp19.000" << endl;
    harga=harga+19000;
  }
  else if(pilih==4){
    cout << "4. Cumi Goreng : Rp20.000" << endl;
    harga=harga+20000;
   
  }
  else if(pilih==5){
    cout << "5. Ayam Bakar : Rp25.000" << endl;
    harga=harga+25000;
   
  }
}
}
