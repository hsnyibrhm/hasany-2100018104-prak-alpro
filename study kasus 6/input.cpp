#include <iostream>
#include <string>

using namespace std;
class studikasus{

	public:
	void input(){
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
	

	private:
	int n;
	string nama[10],nama_matkul[50];
	int nilai_tugas[10];
	int nilai_uts[10];
	int nilai_uas[10];
	float rata,akhir;
};