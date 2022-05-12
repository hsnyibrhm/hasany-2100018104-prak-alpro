#include <iostream>
#include <string>

using namespace std;
class studikasus{

	public:
	void input();
  void outpro();
	

	private:
	int n;
	string nama[10],nama_matkul[50];
	int nilai_tugas[10];
	int nilai_uts[10];
	int nilai_uas[10];
	float rata,akhir;
};

void studikasus::input(){
  cout << "Masukan Jumlah mahasiswa = ";
	cin >> n;

	for (int i = 0; i < n; i++) {
		cout << endl;
		cout << "Mahasiswa ke- " << i + 1 <<endl;
		cout << "Masukan Nama = ";
		cin >> nama[i];
    cout << "Masukan nama mata kuliah = ";
    cin >> nama_matkul[i];
		cout << "Masukan Nilai Tugas = ";
		cin >> nilai_tugas[i];
		cout << "Masukan Nilai UTS = ";
		cin >> nilai_uts[i];
		cout << "Masukan Nilai UAS = ";
		cin >> nilai_uas[i];	
	}
}

void studikasus::outpro(){
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
}