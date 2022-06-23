#include <iostream>

using namespace std;

class sk10{
  public:
    void input();
    void proses();
    void output();

  private:
    int nim[10];
    int n;
    string nama[10];
    int *nimM;
    string *namaM;

 };

void sk10::input(){
  cout << "masukan banyak data yang ingin di input :";
  cin >> n;
  for (int i=0; i < n; i++){
    cout << "input nama mahasiswa ke-" << i+1 << " ";
    cin >> nama[i];
    cout << "input nim, mahasiswa ke-" << i+1 << " ";
    cin >> nim[i];
  }
  
}

void sk10::proses(){
  cout << "\n\nMenyimpan data inputan ke pointer\n";
  nimM = new int[n];
  namaM = new string[n];
  for(int i=0; i<n; i++){
    *nimM = nim[i]; nimM++;
    *namaM = nama[i]; namaM++;
  }
}

void sk10::output(){
  
  cout << "\nTampilan data Mahasiswa yang ke Final" << endl;
    nimM -=n ;
    namaM -=n;
    cout<<endl;

    for (int i=0; i<n; i++) 
    {
      cout << "\n Nama : ";
      cout << *namaM ;
      namaM++;
      cout << "\n Nim  : " ;
      cout << *nimM ;
      nimM++;
      cout<<endl;
	  }
}

int main(){
  sk10 x;
  x.input();
  x.proses();
  x.output();
}