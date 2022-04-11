#include<iostream>
#include<conio.h>
#include<cstdlib>
using namespace std;

int maks = 5;
int top = 0;
string arrayBuku[5];

bool isFuel(){
	if (top == maks){
		return true;
	} else {
		return false;
	}
}

bool isEmpty(){
	if (top == 0){
		return true;
	} else {
		return false;
	}
}

void pushArray(string data){
	if (isFuel()){
		cout << "Data Penuh" << endl;
	} else {
		arrayBuku[top] = data;
		top++;
	}
}

void popArray(string data){
	if(isEmpty()){
		cout << "Data Kosong !!" << endl;
	} else {
		cout << "Data '" << arrayBuku[top-1] << "' telah Dihapus" << endl;
		arrayBuku[top-1] = "";
		top--;   
	}
}

void displayArray(){
	if (isEmpty()){
		cout << "Data Kosong" << endl;
	} else {
		cout << "========================" << endl;
		cout << "Data Stack Array : " << endl;
		for (int i = 4; i > -1; i--){
			if(arrayBuku[i] != ""){
			cout << "data : " << arrayBuku[i] << endl;
			}
		}
	}
}

void peekArray(int posisi){
	if (isEmpty()){
		cout << "Data Kosong!!" << endl;
	} else {
		int index = top;
		for (int i = 0; i < posisi; i++){
			index--;
		}
		cout << "Data Posisi ke - " << posisi << " : " << arrayBuku[index] << endl; 
	}
}

int main(){
	int pil;
	string data;
	while (pil != 5){
		system("cls");
		cout << "1. Tambah Data (push)" << endl;
		cout << "2. Hapus Data  (pop)" << endl;
		cout << "3. Tampil Isi  (display)" << endl;
		cout << "4. Intip Data  (peek)" << endl;
		cout << "5. Exit" << endl;
		cout << "========================" << endl;
		cout << "Pilihan : "; cin >> pil;
		if (pil == 1){
			cout << "Input : "; cin >> data;
			pushArray(data);
		} else if (pil == 2){
			popArray(data);
		} else if (pil == 3){
			displayArray();
		} else if (pil == 4){
			if(isEmpty()){
				cout << "Data Kosong !!" << endl;
			} else{
				int q;
				cout << "Input Nomer data : ";
				cin >> q;
				peekArray(q);
			}
		}
		getch(); 	
	}
	cout << "Program By Paijo Gimang (Danara Slurd)";
	cin.get();
	return 0;
}
