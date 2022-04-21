
#include <iostream>
using namespace std;

class data{
  public:
    void input();
    int  total(int i);
    void proses();


  private:
    string nama,matkul[30];
	  int nim,sks[30] ;
	  int jmlmtkl, jmlsks;
	 
};

void data::input(){
  cout<<"Masukkan nama anda : "; cin>>nama;
      cout<<"Masukkan NIM anda : "; cin>>nim;
      cout<<"Masukkan jumlah matkul yang ingin anda ambil : "; cin>>jmlmtkl;
        for(int i = 0; i < jmlmtkl; i++ ){
          cout << "matkul ke " << i+1 << " : ";
          cin >>  matkul[i];
            cout << "banyak sks : ";
            cin >> sks[i];
        }
}
int total(int a){
  int biaya = 112500;
  int  jmlbyr = 0;
  if (a== 0){
    return biaya;
  }
  else{
    return biaya+total(a-1);
    
  }
  jmlbyr = biaya;
 
}

void data::proses(){
  for (int b = 0; b < jmlmtkl; b++){
    jmlsks += sks[b];
  }
  cout << "nama " << nama << endl;
  cout << " jumlah matkul yang di ambil : " << jmlmtkl << endl;
  cout << " daftar matkul : " << endl;
  for (int c = 0; c < jmlmtkl; c++){
    cout << matkul[c] << " ";
  }
}

