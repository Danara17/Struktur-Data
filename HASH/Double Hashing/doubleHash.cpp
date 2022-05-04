#include<iostream>
using namespace std;

int main()
{

	int jum;
	cout << "Jumlah Nilai : ";
	cin >> jum;
	
	int nilai[jum];
	int tabelHash[99];
	
	for(int a = 0; a < 99; a++)
		tabelHash[a] = -1;
	
	for(int ind = 0; ind < jum; ind++)
	{
//		nilai[ind] = (rand()%9) + 1;
		
		cout << "Input : "; cin >> nilai[ind]; 
		
		int hash1 = nilai[ind] % 13;
		int hash2 = 7 - (nilai[ind] % 7);
		
		if(tabelHash[hash1] == -1){
			tabelHash[hash1] = nilai[ind];
		}else{
			tabelHash[hash1 + hash2] = nilai[ind];
		}
	}
	cout << "Sebanyak " << jum << " Data Berhasil Diisi\n";
	
	int cari;
	cout << "Cari : ";
	cin >> cari;
	
	int cari1 = cari % 13;
	if(tabelHash[cari1] != cari)
	{
		int cari2 = 7 - (cari % 7);
		cout << tabelHash[cari1 + cari2] << " Posisi ke " << cari1+cari2;
	}else
	{
		cout << tabelHash[cari1] << " Posisi ke " << cari1;
	}
}
