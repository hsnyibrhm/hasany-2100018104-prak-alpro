#include <iostream>
using namespace std;

class input{
  public:
      cout<<"Masukkan nama anda : "; cin>>nama;
      cout<<"Masukkan NIM anda : "; cin>>nim;
      cout<<"Masukkan jumlah matkul yang ingin anda ambil : "; cin>>jmlmtkl;
        for(int i = 0; i < jmlmtkl; i++ ){
          cout << "matkul ke " << i+1 << " : ";
          cin >>  matkul[i];
            cout << "banyak sks : ";
            cin >> sks[i];
        }

  private:
    string nama,matkul[30];
	  int nim,sks[30] ;
	  int jmlmtkl, jmlsks;
	  int biaya = 15000;
	  int bayar;
}

int main(){
  input x;
}