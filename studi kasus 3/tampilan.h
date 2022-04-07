#include <iostream>
#include "alamat.h"


using namespace std;

void rumah :: tampilan(){
	ofstream slip ("struk.txt");
	cout << endl;
	
	if(!slip.is_open()){
		
		cout<< "Tidak Bisa Membuka File";
	}
	else{
		slip << "||==================================================||" << endl;
		slip << "||                 Data pembelian                   ||" << endl;
		slip << "||            jumlah yang harus di bayar            ||" <<endl;
		slip << "||==================================================||" << endl;
		
		
		slip.close();
	}
}
