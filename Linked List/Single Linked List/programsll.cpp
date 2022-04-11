#include<iostream>
#include<cstring>
using namespace std;

struct simpul{
	char nama[30];
	
	simpul *next;
};

simpul *awal, *baru;

bool isEmpty(){
	if(awal == NULL){
		return true;
	} else{
		return false;
	}
}

void tambah_depan(){
	baru = new simpul();
	cout << "Input Nama : ";
	scanf(" [^\n]s", &baru->nama);
	strcpy(baru->nama, strupr(baru->nama));	
	baru->next = NULL;
	if (isEmpty){
		awal = baru;
	} else{
		baru->next = awal;
		awal = baru;
	}		
}

int main (){
	int pil;
	awal = NULL;
	while (pil != 5){
		cout << "1. Tambah Depan " << endl;
		cout << "2. Tambah Belakang " << endl;
		cout << "3. Tambah Tengah" << endl;
		cout << "4. Tampil" << endl;
		cout << "5. Exit" << endl;
		cout << "Pil : "; cin >> pil;
		switch(pil){
			case 1 :
				tambah_depan(); 
				break;
			
			case 4 :
				;
		}
	}
}
