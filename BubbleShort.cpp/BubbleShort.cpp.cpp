#include <iostream>
using namespace std;


int a[20];					//Deklarasi array dengan ukuran 20 
int n;						//Deklarasi variabel n untuk menyimpan banyak elemen pada array


void input() { //Procedure untuk input
	while (true) { //looping
		cout << "Masukkan banyak elemen pada array: "; //output ke layar
		cin >> n; //input dari pengguna
		if (n <= 20) //jika n kurang dari atau sama dengan 20
			break; //kluar dari loop
		else { //jika n lebih dari 20
			cout << "\nArray dapat mempunyai maksimal 20 elemen.\n"; //output ke layar
		}
	}
	cout << endl; //output baris kosong 
	cout << "====================" << endl; //output ke layar
	cout << "Masukkan elemen array" << endl; //output ke layar
	cout << "====================" << endl; //output ke layar

	for (int i = 0; i < n; i++) {
		cout << "Data ke-" << (i + 1) << ";";
		cin >> a[i];
	}
}

void display() {
	cout << endl;
	cout << "===============================" << endl; //output ke layar
	cout << "Elemen array yang telah tersusun" << endl; //output ke layar
	cout << "===============================" << endl; // output ke layar
	for (int j = 0; j < n; j++) { //looping dari j dimulai dari o hingga n-1
		cout << a[j] << endl; //output ke layar
	}
	cout << endl; //output baris kosong
}

void bubbleSortArray() { //Procedure untuk mengurutkan array dengan metode bubblesort
	for (int i = 1; i < n; i++) { //looping dengan i dimulai dari 1 hingga n-1
		for (int j = 0; j < n - i; j++) { //looping dengan j dimulai dari 0 hingga n-1
			if (a[j] > a[j + 1]) { //jika nilai pada a[j] lebih besar dari a[j + 1]
				int temp = a[j]; //simpan nilai a[j] ke variabel sementara temp
				a[j] = a[j + 1]; //Assign nilai a[j + 1] ke a[j]
				a[j + 1] = temp; //Assign nilai temp ke a[j + 1]
			}
		}
	}
}


int main() {
	input(); //memanggil read
	bubbleSortArray(); //memanggil bubbleSortArray()
	display(); //memanggil display
	return 0;
	}