#include <iostream>

using namespace std;
class output{
  public:
    void cetak(){
    cout << "\nNIM : " << nim<<endl;
    cout << "\nNama Mahasiswa : " << nama<<endl;
    cout << "\nJumlah Mata Kuliah : " << jmlmtkl<<endl;
    cout << "\nDaftar Mata Kuliah : " << matkul<<endl;
    cout << "\nJumlah SKS         : " << jmlsks<<endl;
    cout << "\nTotal Pembayaran   : " << biaya<<endl;
    }

    void getData(){
			input_data.open("data.txt");
    input_data.close();

  private:
    int biaya;
    string nama,matkul[30];
    int nim,sks[30] ;
	  int jmlmtkl, jmlsks;
	  int biaya = 15000;
	int bayar;
}

int main(){
  output x;
  
}