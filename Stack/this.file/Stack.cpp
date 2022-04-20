#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

int maks = 5;
int top = 0;

bool isFull(){
	if(top == maks){
		return true;
	}else{
		return false;
	}
}

bool isEmpty(){
	if(top == 0){
		return true;
	}else{
		return false;
	}
}

struct {
	int usia;
	char nama[30];
}KTP[5];

void push(){
	cout << "Input Nama : ";
	scanf(" %[^\n]s", &KTP[top].nama);
	cout << "Input Usia : ";
	cin >> KTP[top].usia;
	top++;
	
	cout << "\n<Data Berhasil Dimasukkan>";
}

void pop(){
	cout << "Data Berhasil Dihapus!" << endl;
	KTP[top].usia = 0;
	char dummy[] = "";
	strcpy(KTP[top].nama, dummy);
	top--;
}

void display(){
	cout << "Data KTP : " << endl;
	cout << "Stack\tUsia\tNama" << endl;
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n" ;
	for(int i = 0; i < top; i++){
		cout << i+1 <<  "\t" << KTP[i].usia << "\t" << KTP[i].nama << "\n";
	}
}

void peek(){
	int cari;
	cout << "Intip Data <posisi> : " ; cin >> cari;

	if(cari > maks){
		cout << "Posisi Tidak Ada";
	}else{
		int index = top;
		for(int i = 0; i < cari; i++){
			index--;
		}
		cout << "Data Posisi ke " << cari << " : " << endl;
		cout << "\t" << KTP[index].nama << " Usia " << KTP[index].usia << " Tahun" << endl;
	}
	
	
}

enum{
	PUSH = 1, POP = 2, DISPLAY = 4, PEEK = 3
};

int main()
{
	int pil;
	
	while(pil != 5){
		system("cls");
		cout << "1. Push" << endl;
		cout << "2. Pop" << endl;
		cout << "3. Peek" << endl;
		cout << "4. Display" << endl;
		cout << "5. Exit" << endl;
		
		cout << "\nPil : "; cin >> pil;
		
		switch(pil){
			case PUSH:
				
				system("cls");
				if(isFull()){
					cout << "Data Penuh!";
				}else{
					push();
				}
				
				getch();
				break;
			case POP:
				system("cls");
				if(isEmpty()){
					cout << "Data Masih Kosong!";
				}else{
					pop();
				}
				
				getch();
				break;
			case DISPLAY:
				system("cls");
				if(isEmpty()){
					cout << "Data Masih Kosong!";
				}else{
					display();
				}
				
				getch();
				break;
			
			case PEEK:
				system("cls");
				if(isEmpty()){
					cout << "Data Masih Kosong!";
				}else{
					peek();
				}
				
				getch();
				break;
		}
	}
}
