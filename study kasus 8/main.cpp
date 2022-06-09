#include <iostream>
using namespace std;

class sk8{
  public:
    void input();
    void proses();
    void output();
  private:
    string a[7][3];
    
};

void sk8::input(){
 for(int i = 0; i < 7; i++){
   cout << "Masukan ID : " ;
   cin >> a[i][0];
   cout << "Masukan nama barang : ";
   cin >> a[i][1];
   cout << "Masukan harga barang : ";
   cin >> a[i][2];
 }
  cout<<endl<<endl;
}

void sk8::proses(){
  cout<<"DAFTAR HARGA TOKO SEMBAKO PAK TONI"<<endl;

  cout << "==========================================\n";
  cout << "|| ID \t \t Nama \t \t Harga ||"<<endl;
  cout << "==========================================\n";
  for(int i=0; i<7; i++){
    for(int j=0; j<3; j++){
      cout<<a[i][j]<<"\t|| ";
    }
    cout<<endl;
  }
}

void sk8::output(){
  string cari;
  cout << "\nInput ID yang ingin dicari : ";
  cin >> cari;
  for(int i = 0; i < 7; i++)
  {
    for(int j=0; j<3; j++)
    if(a[i][0] == cari)
    {
      cout << "ID : " << a[i][0] << endl;
      cout << "Nama Barang : " << a[i][1] << endl;
      cout << "Harga Barang : " << a[i][2] << endl;
    }
  }
}


int main() {
  sk8 x;
  x.input();
  x.proses();
  x.output();
  return 0;
}