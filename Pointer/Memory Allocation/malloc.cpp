#include<iostream>
using namespace std;


int main(){
	
	int *alamat;
	
	alamat = (int*) malloc(sizeof(int));
	
	/*	
		biasanya kta mendeklarasikan suatu variabel seperti :
		
			int x = 10;
			
		nah baris code diatas bisa ditulis prosesnya:
		
			1. Alokasi memori untuk variabel x sebesar tipe data int di suatu alamat tertentu
			2. Mengisi alamat yang sudah disiapkan dengan variabel baru
			3. Mengisi variabel yang ada dimemori dengan value 
		
		nah tetapi ada suatu masalah disini. ketika program berjalan kita tentu tidak bisa menulis code tersebut.
		tentu tidak bisa karena program sudah berjalan. maka dari itu ada solusi yaitu kita bisa mengalokasikan
		memori tanpa mendeklarasika variabelnya. tentu kita menggunakan konsep pointer dan alamat suatu memori
		
		baris code:
		baris code untuk alokasi memori : 
		
			alamat = (int*) malloc(sizeof(int));
			
				malloc() ini untuk reservasi sebuah tempat di dalam memori
			
			1. sizeof(int) >>> untuk mengetahui besar tipe data int
			2. malloc(sizeof(int)) >>> "memori, tolong alokasikan atau siapkan tempat sebesar (tipe data)"
			
			nah jika sudah proses 2 maka memori sudah menyiapkan tempat untuk data baru
			
			3. Jika sudah maka ada kita akan ke tahap casting, yaitu memfilter atau mengambil 
			   dari sesuatu yang sudah jadi, misal seperti diatas (int*) berarti kita hanya mengambil alamatnya saja
			 
		
			baris code diatas bisa disingkat yaitu:
			
			alamat = new int;
		
	*/
	
	int *alamat_1;
	alamat_1 = (int*) malloc(sizeof(int));
	*alamat_1 = 20;
	cout << "Nilai : " << *alamat_1 << "[" << alamat_1 << "]\n";
	
	int *alamat_2;
	alamat_2 = new int;
	*alamat_2 = 99;
	cout << "Nilai : " << *alamat_2 << "[" << alamat_2 << "]\n";
}
