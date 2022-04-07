#include <iostream>
#include <fstream>


using namespace std;

class rumah {
	private:
		int pilih,bayar,kembalian,harga,total,menu,jarak;
		float diskon;
		
	public:
		rumah(){
		};
		void makanan();
		void pilihan();
		void alamat();
		void tampilan();
};

void rumah :: makanan(){
	cout << "\t\t\tSELAMAT DATANG\n";
	cout << "\t\tRUMAH MAKAN SEDERHANA\n";
    cout << "====================================================\n"; 
    cout << "\nMenu Makanan dan Harga : \n"; 
    cout << "\n1. Ayam Geprek  : Rp21.000\n";
    cout << "2. Ayam Goreng  : Rp17.000\n";
    cout << "3. Udang Goreng : Rp19.000\n";
    cout << "4. Cumi Goreng  : Rp20.000\n";
    cout << "5. Ayam Bakar   : Rp25.000\n";
    
    cout <<"\nBanyak pesanan : ";
    cin >> menu;
}
