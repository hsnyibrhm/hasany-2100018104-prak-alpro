#include <iostream>
#include <fstream>


using namespace std;

class rumah {
	private:
		int pilih, bayar, kembalian, harga, total, menu, jarak;
		float diskon;
		
	public:
		rumah(){};
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
    
   
}
void rumah :: pilihan(){
	cout << "\nBanyak pesanan : ";
    cin >> menu;
	for(int i = 1; i <= menu; ++i){
	cout << "\nSilahkan Pilih Menu Anda : ";
    cin >> pilih;
  
  if (pilih == 1){
    cout << "1. Ayam Geprek : Rp21.000" << endl;
    harga = harga+21000;
    
  }
  else if (pilih == 2){
    cout << "2. Ayam Goreng : Rp17.000" << endl;
    harga=harga+17000;
    
  }
  else if (pilih == 3){
    cout << "3. Udang Goreng : Rp19.000" << endl;
    harga = harga+19000;
  }
  else if (pilih == 4){
    cout << "4. Cumi Goreng : Rp20.000" << endl;
    harga = harga + 20000;
   
  }
  else if(pilih == 5){
    cout << "5. Ayam Bakar : Rp25.000" << endl;
    harga = harga+25000;
   
  }
}
}

void rumah :: alamat(){
	cout << "Masukkan Jarak dari Restoran ke Rumah Anda (dalam KM) : ";
    cin >> jarak;
    cout << "\nJarak dari Restoran ke Rumah Anda adalah " << jarak << " Kilometer.";
   
  if (jarak <= 3){

    if (harga <= 25000){

      total = harga + 15000;
  }
    else  if (harga > 25000){

      cout << "\n\nAnda mendapatkan potongan ongkir sebesar Rp3.000";
      total = harga + 12000;
    }
    else if (harga > 50000){

      cout << "\nAnda mendapatkan potongan diskon sebesar 15% dan ongkir sebesar Rp5.000";
      diskon = harga * 0.15;
      total = harga - diskon + 10000;
    }

    else if ((harga > 150000)){

      cout << "\n\nAnda mendapatkan potongan diskon sebesar 35% dan ongkir sebesar Rp8.000";
      diskon = harga * 0.35;
      total = harga - diskon + 7000;
      
    }
  }

  else if (jarak > 3){

    if (harga <= 25000){

    total = harga + 25000;
    
  }

    if ((harga > 25000) && (harga <= 50000)){

      cout << "\n\nAnda mendapatkan potongan ongkir sebesar Rp3.000";
      total = harga + 22000;
     
    }
    else if ((harga > 50000) && (harga <= 150000)){

      cout << "\n\nAnda mendapatkan potongan diskon sebesar 15% dan ongkir sebesar Rp5.000";
      diskon = harga * 0.15;
      total = harga - diskon + 20000;
     
  
  }

    else if ((harga > 150000)){

      cout << "\n\nAnda mendapatkan potongan diskon sebesar 35% dan ongkir sebesar Rp8.000";
      diskon = harga * 0.35;
      total = harga - diskon + 17000;
      
    }
  }
  
    cout <<"\nTotal Harga : " << total;
    cout << "\nMasukkan Uang Anda : ";
    cin >> bayar;
    cout << "Kembalian : " << bayar - total;
	
}
	

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
		slip << "Total :" << total << endl;
		slip << "Uang anda :" << bayar << endl;
		slip << "Kembalian :" << kembalian << endl;
		slip << "\n\n=========TERIMAKASIH SUDAH BERKUNJUNG==========";
		slip << "\n=================SELAMAT MENIKMATI=============";
		
		
		slip.close();
	}
}

int main(){
	rumah x;
	x.makanan();
	x.pilihan();
	x.alamat();
	x.tampilan();

	
	
	return 0;
}
