#include <iostream>
using namespace std;

class input{
  public :
    void cetak(){
      cout<<"Masukkan uang saku : ";
      cin>>saku;
      cout<<"Masukkan bulan : ";
      cin>>bulan;
    }

    void toFile(){
      tulis_data.open("input.txt");
      tulis_data<<saku<<endl;
      tulis_data<<bulan;
      tulis_data.close();
    }

  private :
    ofstream tulis_data;
    int saku, bulan;
};