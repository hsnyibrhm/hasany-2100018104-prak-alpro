#include <iostream>
#include <string>

using namespace std;

class sk{
public:

void input(int n){
for (i=0;i<n;i++){
  cout << "Masukan ID : " ;
  cin >> id[i];
  cout << "Masukan Nama : ";
  cin >> nama[i];
  cout << "Masukan Jabatan : ";
  cin >> jabat[i];
  cout << "Masukan Alamat : " ;
  cin >> alamat[i];
  cout << "Masukkan No Telp : "; 
  cin >> tel[i];

  cout << endl;
}
  cout << endl;
}

void proses(int n){
  // sorting
  int temp;
  string temp1; // nama , alamat, jabatan
  long long temp2; // no telpon
  for (int i = 0; i < n; i++){
    for (int j = 0; j < n - 1; j++){
      if(id[j] > id[j+1] ){
        temp = id[j];
        id[j] = id[j+ 1];
        id[j+1] = temp;
        
        temp1 = nama[j];
        nama[j] = nama[j+ 1];
        nama[j+1] = temp1;

        temp1 = alamat[j];
        alamat[j] = alamat[j+ 1];
        alamat[j+1] = temp1;

        temp1 = jabat[j];
        jabat[j] = jabat[j+ 1];
        jabat[j+1] = temp1;

        temp2 = tel[j];
        tel[j] = tel[j+ 1];
        tel[j+1] = temp2;
      }
    }
  }
  // pengurutan
  for(int i = 0; i < n; i++){
    cout << id[i] << "\t" << nama[i] << "\t" << jabat[i] << "\t" << alamat[i] << "\t" << tel[i] << endl;
  }
  
}

void output(int n){
  int cari ;
  cout << "Masukan ID yang mau di cari : ";
  cin >> cari;
  for(int i = 0; i < n ; i++){
    if(id[i] == cari){
      cout << "Nama : " << nama[i] <<endl;
      cout << "Jabatan : " << jabat[i] <<endl;
      cout << "Alamat : " << alamat[i] <<endl;
      cout << "No Telp : " << tel[i] << endl;
    }
  }
}

private:
	int n, i;
  int id[100];
  long long tel[50];
	string nama[50];
  string jabat[50];
  string alamat[50];
	


};

int main() {
  int n;
  cout << endl << "Masukan berapa data yang mau di input : ";
  cin >> n;
  sk g;
  g.input(n);
  g.proses(n);
  g.output(n);

  
}
