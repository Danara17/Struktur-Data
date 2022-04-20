#include<iostream>
#include<string.h>
#include<conio.h>
using namespace std;

struct{
	int usia;
	char nama[30];
}KTP[5];

int maks = 5;
int front = 0;
int back = 0;

bool isFull(){
	if(back == maks){
		return true;
	}else{
		return false;
	}
}

bool isEmpty(){
	if(back == 0){
		return true;
	}else{
		return false;
	}
}

enum{
	ENQUEUE = 1, DEQUEUE = 2, PEEK = 3, DISPLAY = 4
};

void enqueue(char _nama[30], int _usia){
	if (isEmpty()){
		KTP[0].usia = _usia;
		strcpy(KTP[0].nama, _nama);
		front++;
		back++;
		cout << "\n<Data Berhasil Dimasukkan>";
	} else {
		KTP[back].usia = _usia;
		strcpy(KTP[back].nama, _nama);
		back++;
		cout << "\n<Data Berhasil Dimasukkan>";
	}
}

void dequeue(){
	for (int index = 0; index < back; index++){
		if (index == 0){
			cout << "Data Berhasil Dihapus" << endl;
		}
		KTP[index] = KTP[index+1];
	}
	back--;
}

void peek(){
	cout << "Data Antrian Terdepan :\n";
	cout << "\t" << KTP[0].nama << " Usia " << KTP[0].usia << " Tahun" << endl;
	
	int cari;
	cout << "Intip Data <posisi> : " ; cin >> cari;

	if(cari > maks){
		cout << "Posisi Tidak Ada";
	}else{
		for(int i = 0; i < maks; i++){
			if(i == (cari - 1)){
				cout << "Data Posisi ke " << cari << " : " << endl;
				cout << "\t" << KTP[i ].nama << " Usia " << KTP[i ].usia << " Tahun" << endl;
			}
		}
	}
}

void display(){
	cout << "Data KTP : " << endl;
	cout << "Queue\tUsia\tNama" << endl;
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n" ;
	for(int i = 0; i < maks; i++){
		cout << i+1 <<  "\t" << KTP[i].usia << "\t" << KTP[i].nama << "\n";
	}
}
int main(){
	int pil;
	
	while(pil != 5){
		system("cls");
		cout << "1. Enqueue" << endl;
		cout << "2. Dequeue" << endl;
		cout << "3. Peek" << endl;
		cout << "4. Display" << endl;
		cout << "5. Exit" << endl;
		
		cout << "\nPil : "; cin >> pil;
		
		switch(pil){
			case ENQUEUE:
				system("cls");
			
				if(isFull()){
					cout << "Antrian Penuh!";
				}else{
					char dataNama[30];
					int dataUsia;
					cout << "Input Nama : ";
					scanf(" %[^\n]s", &dataNama);
					cout << "Input Usia : ";
					cin >> dataUsia;
					enqueue(dataNama, dataUsia);
				}
				
				getch();
				break;
			
			case DEQUEUE:
				system("cls");
				if(isEmpty()){
					cout << "Data Kosong!";
				}else{
					dequeue();
				}
				
				getch();
				break;
			
			case PEEK:
				system("cls");
				
				if(isEmpty()){
					cout << "Data Kosong!";
				}else{
					peek();
				}
				
				getch();
				break;
				
			case DISPLAY:
				system("cls");
				
				if(isEmpty()){
					cout << "Data Kosong!";
				}else{
					display();
				}
				
				getch();
				break;
		}
		
	}
}
