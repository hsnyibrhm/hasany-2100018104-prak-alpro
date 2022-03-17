#include <iostream>

using namespace std;

int main(){
	
	float a,b,hasil;
	char mtk;
	
	cout << "\t \t selamat datang di program kalkulator\n\n";
	cout << "masukkan nilai pertama: ";
	cin >> a;
	cout << "pilih operator -,/,*,+ : ";
	cin >> mtk;
	cout << "masukan nilai kedua: ";
	cin >> b;
	
	if(mtk == '+'){
		hasil = a + b;
	} else if (mtk == '-'){
		hasil = a - b;
	} else if (mtk == '/'){
		hasil = a / b;
	} else if (mtk == '*'){
		hasil = a * b;
	} else {
		cout << "anda memasukan operator yang salah" << endl;
	}
	
	cout << " = " << hasil << endl;
	
	cin.get();
	return 0;
}
