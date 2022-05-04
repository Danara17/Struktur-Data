#include<iostream>
#include<conio.h>
using namespace std;

struct simpul{
	
	int isi;
	
	simpul *next;
};

simpul *kepala, *baru;

bool isEmpty()
{
	if(kepala == NULL){
		return true;
	}else{
		return false;
	}
}

void tambahList()
{
	int x;
	
	baru = new simpul();
	
	cout << "Input : ";
	cin >> x;
	
	baru->isi = x;
	baru->next = NULL;
	
	if(isEmpty()){
		kepala = baru;
	}else{
		baru->next = kepala;
		kepala = baru;
	}
}

void tampilList(){
	simpul *nodeTampil; //membuat simpul untuk menampung data list
	
	nodeTampil = kepala;//mengisi simpul nodeTampil dengan kepala list
	int x = 1;
	while (nodeTampil != NULL){ // selama nodeTampil yang di tampung bukan menunjuk NULL
		cout << nodeTampil->isi << " "; //tampil list
		nodeTampil = nodeTampil->next;//mengisi nodeTampil dengan alamat next yang telah diisi
		x++;
	}
}

int main()
{
	int pil;
	while(pil != 3)
	{
		cout << "1. Tambah\n";
		cout << "2. Tampil\n";
		cout << "3. Exit\n";
		cout << "~~~~~~~~~~~~~~\n";
		cout << "Pil : ";
		cin >> pil;
		
		if(pil == 1){
			tambahList();
			getch();
		}else if(pil == 2){
			tampilList();
			getch();
		}
	}
	
}
