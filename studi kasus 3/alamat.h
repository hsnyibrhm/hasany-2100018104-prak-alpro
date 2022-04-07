#include <iostream>
#include "pilihan.h"


using namespace std;

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
