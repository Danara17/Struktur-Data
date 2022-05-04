#include<iostream>
using namespace std;

/*
	-) tempat yang saling berhubungan itu disebut link list
	-) karena dia belum di deklarasikan berapa jumlahmya maka link list memiliki limit tidak terbatas
	-) kepala atau HEAD dari linked list bisa disebut patokan land mark dari suatu list
	-) jika ingin mengetahui akhir atau habis ekor atau TAIL akan bernilai NULL
	-) list disebut ada datanya atau exist FIRST != NULL
*/

typedef struct node *alamat; // membuat tipe baru "alamat adalah pointer ke node"
struct node{
	//node berisi dua yitu bagian data dan bagian conector 
	
	//bagian data
	int data;
	
	//bagian connector
	
	alamat next; //menyimpan alamat dari node yg akan dibuat selanjutnya
	
	//bisa disingkat tanpa typedef
	//node *next;
};

int main()
{
	alamat first, p; //artinya first dan p bisa menyimpan alamat dari sebuah node
	first = new node;
	first->data = 10;
	first->next = NULL;
}
