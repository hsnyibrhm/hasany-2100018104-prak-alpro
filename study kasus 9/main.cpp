#include <iostream>
using namespace std;

class sk9 {
  public:
    void input();
    void proses();
    void output();
  private:
    string data[45];
    string mhs[3][15];
    int a, b, i;
};

void sk9::input(){
  for(int i=0; i<45; i++){
      cout << "Masukkan data" << i+1 << " = " ;
      cin >> data[i];
    //untuk data[1,4,7,10,13,16,19,22,25,28,31,34,37,40,43] atau data[i%3=1] untuk menginputkan kelas
    //untuk data[2,5,8,11,14,17,20,23,26,29,32,35,38,41,44] atau data[i%3=2] untuk menginputkan nim
    //untuk data[3,6,9,12,15,18,21,24,27,30,33,36,39,42,45] atau data[i%3=0] untuk menginputkan nama
    }
    cout << endl;
}


void sk9 :: proses(){
  i = 0;
  while(i < 45){
    for(a = 0; a < 3; a++){
      for(b = 0; b < 15; b++){
        mhs[a][b] = data[i];
        i++;
      }
    }
  }
}


void sk9::output()
{
  cout << "   KELAS" << "   NIM" << "    NAMA" << endl;
  for (int i=0; i<3; i++)
    {
      for (int j=0; j<15; j++)
        {
          cout << mhs[i][j] << "  ";
          if (j == 2){
            cout << endl;
          }
          else if(j == 5){
            cout << endl;
          }
          else if(j == 8){
            cout << endl;
          }
          else if (j == 11){
            cout << endl;
          }
          else if(j == 14){
            cout << endl;
          }
          
        }
      cout << endl;
    }
}

int main(){
  sk9 b;
  b.input();
  b.proses();
  b.output();

  return 0;
}