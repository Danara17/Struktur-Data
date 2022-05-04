#include<iostream>
#include<conio.h>
using namespace std;

class Hash{
	public:
		
		int tabel[99];
		
		Hash(int nilai[], int jum)
		{
			for(int ind = 0; ind < 99; ind++)
			{
				tabel[ind] = -1;
			}
			
			cout << "Input :\n\n";
			for(int ind = 0; ind < jum; ind++)
			{
				cout << "\t>> Nilai " << ind+1 << " : ";
				cin >> nilai[ind];
				
				int hash1 = nilai[ind] % 13;
				int hash2 = 7 - (nilai[ind] % 7);
				
				if(tabel[hash1] == -1){
					tabel[hash1] = nilai[ind];
				}else{
					tabel[hash1 + hash2] = nilai[ind];
				}
			}
		}
		
		void cariNilai(int cari)
		{
			cout << endl;
			int cari1 = cari % 13;
			int cari2 = 7 - (cari % 7);
			if(tabel[cari1] == cari)
			{
				cout << "  >> Nilai " << tabel[cari1] << " Ditemukan di Indeks ke " << cari1;	
			}else if(tabel[cari1 + cari2] == cari)
			{
				cout << "  >> Nilai " << tabel[cari1 + cari2] << " Ditemukan di Indeks ke " << cari1+cari2;	
			}else
			{
				cout << "  >> Nilai tidak ditemukan di Indeks manapun";
			}	
		}
};

int main()
{
	int jum;
	cout << "Input Jumlah : ";
	cin >> jum;
	system("cls");
	
	int nilai[jum];
	Hash data(nilai, jum);
	
	system("cls");
	cout << "Data Berhasil Dimasukkan";
	getch();
	system("cls");
	
	char pil;
	do{
		system("cls");
		int cari;
		cout << "Cari : ";
		cin >> cari;
		
		data.cariNilai(cari);
		cout << "\n\n\tCari Lagi <y/n> : ";
		cin >> pil;
		
	}while(pil == 'Y' || pil == 'y');
	
}
