#include <iostream>


using namespace std;

class output {
	public :
		void cetak(){
			for (int i = 0; i < bulan; i++){
    cout << "Pengeluaran bulan : " << i+1 <<" = "<<data_file[i]<<endl;
  }

      
		cout << "Total pengeluaran : " << total;
    cout << "Total tabungan : " << tabungan<<endl;
      
		}


		void getData(){
			ambil_data.open("input.txt");
      
      bool xbulan=true;
      bool xtotal=false;
			while(!ambil_data.eof()){
        if(xbulan){
          ambil_data >> bulan;
          xbulan=false;
          xtotal=true;
        }else if(xtotal){
          ambil_data >> total;
          xtotal=false;
        }else{
          ambil_data >> tabungan;
        }
			}
			ambil_data.close();
		

    ambil_data.open("print.txt");
			while(!ambil_data.eof()){
				ambil_data >> data_file[index];
				index += 1;
			}
			ambil_data.close();
		}

	private :
		ifstream ambil_data;

		string data_file[30];
		int index = 0;
    int bulan,total,tabungan;



};
  