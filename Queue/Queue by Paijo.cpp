#include<iostream>
#include<conio.h>
#include<cstdlib>
using namespace std;

// darray Antrian :
int maks = 5;
int front = 0;
int back = 0;

//ruang antrian
string antrian[5];

bool isFull(){
	if (back == maks){
		return true;
	} else {
		return false;
	}
}

bool isEmpty(){
	if (back == 0){
		return true;
	} else {
		return false;
	}
}

void enqueue(string data){
	if (isFull()){
		cout << "Antrian Penuh" << endl;
	} else {
		if (isEmpty()){
			cout << "'" << data <<"' telah dimasukkan";
			antrian[0] = data;
			front++;
			back++;
		} else {
			cout << "'" << data <<"' telah dimasukkan";
			antrian[back] = data;
			back++;
		}
	}
}

void dequeue(){
	if (isEmpty()){
		cout << "Data Masih Kosong" << endl;
	} else {
		for (int q = 0; q < back; q++){
			if (q == 0){
				cout << "data '" << antrian[q] << "' telah dihapus" << endl;
			}
			antrian[q] = antrian [q+1];
		}
		back--;
	}
}

void display(){
	cout << "Antrian : " << endl;
	if (isEmpty()){
		cout << "Data Masih Kosong" << endl; 
	} else {
		for (int i = 0; i < maks; i++){
			if (antrian[i] != ""){
				cout << i+1 << ". " << antrian[i] << endl;
			} else {
				cout << "(Kosong)" << endl;
			}
		}	
	}
}

int main ()
{
	string data;
	int pil;
	while (pil != 4){
		system("cls");
		cout << "1. Tambah Antrian (Enqueue)" << endl;
		cout << "2. Hapus Antrian  (Dequeue)" << endl;
		cout << "3. Tampil Antrian (Display)" << endl;
		cout << "4. Exit" << endl;
		cout << "===========================" << endl;
		cout << "Pilihan : "; cin >> pil;
		if (pil == 1){
			cout << "Input : "; cin >> data;
			enqueue(data);
			
			cout << "\n\n<press enter to continue>";
		} else if (pil == 2){
			dequeue();
			cout << "\n\n<press enter to continue>";
		} else if (pil == 3){
			cout << "===========================" << endl;
			display();
			cout << "\n\n<press enter to continue>";
		}
		getch();
	}
	cout << "Program By Paijo Gimang (Danara Slurd)";
	return 0;	
}
