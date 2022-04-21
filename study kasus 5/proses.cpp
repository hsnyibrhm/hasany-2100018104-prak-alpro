#include <iostream>

using namespace std;

class proses{
public:
int total(int a){
  int biaya = 150000;
  if (a== 0){
    return biaya;
  }
  else{
    return biaya+total(a-1);
    
  }
  
  biaya = total * 0.25;
}

void cetak(){
  for (int b = 0; b < jmlmtkl; b++){
    jmlsks += sks[b]
  }
  cout << "nama " << nama << endl;
  cout << " jumlah matkul yang di ambil : " << jmlmtkl << endl;
  cout << " daftar matkul : " << endl;
  for (int c = 0; c < jmlmtkl; c++){
    cout << matkul[c] << " ";
  }
    
 
}

private:
int biaya;
 string nama,matkul[30];
 int nim,sks[30] ;
	  int jmlmtkl, jmlsks;
	  int biaya = 15000;
	  int bayar;
};

int main(){
  prose x;
  x.total(int i);
  x.
  
}