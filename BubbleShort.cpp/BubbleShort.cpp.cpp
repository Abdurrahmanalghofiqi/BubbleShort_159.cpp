#include <iostream>
using namespace std;


int a[20];					//Deklarasi array dengan ukuran 20 
int n;						//Deklarasi variabel n untuk menyimpan banyak elemen pada array


void input(){ //Procedure untuk input
	while (true){ //looping
		cout << "Masukkan banyak elemen pada array: "; //output ke layar
		cin >> n; //input dari pengguna
		if (n <= 20) //jika n kurang dari atau sama dengan 20
			break; //kluar dari loop
		else { //jika n lebih dari 20
			cout << "\nArray dapat mempunyai maksimal 20 elemen.\n"; //output ke layar
		}
	}
	cout << endl; //output baris kosong 
	cout << "Masukkan elemen array"