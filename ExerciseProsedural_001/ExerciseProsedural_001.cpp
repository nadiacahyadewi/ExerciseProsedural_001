#include <iostream>
#include <string>
using namespace std;

int main() {
	// Input data nilai kandidat
	int nilai_matematika[20];
	int nilai_bahasa_inggris[20];
	string nama_kandidat[20];
	for (int i = 0; i < 20; i++) {
		cout << "Masukkan nama kandidat: ";
		cin >> nama_kandidat[i];
		cout << "Masukkan nilai matematika: ";
		cin >> nilai_matematika[i];
		cout << "Masukkan nilai bahasa inggris: ";
		cin >> nilai_bahasa_inggris[i];
	}

	// Penentuan status diterima/tidak diterima
	int jumlah_diterima = 0;
	int jumlah_tidak_diterima = 0; 
	for (int i = 0; i < 20; i++) {
		float rata_rata = (nilai_matematika[i] + nilai_bahasa_inggris[i]) / 2;
		if (rata_rata >= 70 || nilai_matematika[i] > 80) {
			cout << nama_kandidat[i] << "\tDiterima" << endl;
			jumlah_diterima++;
		}
		else {
			cout << nama_kandidat[i] << "\tTidak diterima" << endl;
			jumlah_tidak_diterima++;
		}
	}

	// Output total kandidat yang diterima dan tidak diterima
	cout << "jumlah kandidat diterima: " << jumlah_diterima << endl;
	cout << "jumlah kandidat tidak diterima" << jumlah_tidak_diterima << endl;

	return 0;
}