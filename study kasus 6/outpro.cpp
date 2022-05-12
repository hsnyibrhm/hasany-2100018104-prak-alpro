// proses dan ouput
#include <iostream>
#include <string>
using namespace std;

class studikasus{

	public:
  void outpro(){
  cout << "\n\nDAFTAR NILAI MAHASISWA" << endl;
	
	for (int i = 0; i < n; i++) {
//rata rata
    rata = ((nilai_tugas[i] + nilai_uts[i] + nilai_uas[i])/3);
// nilai akhir
    akhir = ((nilai_tugas[i] * 0.2) + (nilai_uts[i] * 0.35) + (nilai_uas[i] * 0.45));
    cout << endl;
		cout << "\nNama        : " << nama[i] << endl;
    cout << "\nMatkul        : " << nama_matkul[i] << endl;
		cout << "Nilai Tugas : " << nilai_tugas[i] << endl;
		cout << "Nilai UTS   : " << nilai_uts[i] << endl;
		cout << "Nilai UAS   : " << nilai_uas[i] <<endl;
    cout << "Nilai Akhir : " << akhir << endl;
		cout << "Nilai Rata2 : " << rata << endl;

  }
	

	private:
	int n;
	string nama[10],nama_matkul[50];
	int nilai_tugas[10];
	int nilai_uts[10];
	int nilai_uas[10];
	float rata,akhir;
};