#include<iostream>
#include<conio.h>

using namespace std;

/*
	Nama : Danara Dhasa Caesa
	NBI  : 1462100146
*/

struct node{
	int NBI;
	char nama[30];
	
	node *next;
};

node *awal[50];

void tampil(){

   node *baru;
   for (int i=0;i<50;i++){
     	baru=awal[i];
     	if (baru!=NULL){
     		cout<<"\n DATA PADA INDEK KE "<<i<<" :";	
		}  
    	while(baru!=NULL)
    	{
    		cout<<"  "<< baru->NBI << " " << baru->nama << endl;
     		baru=baru->next;
    	}
	}
}

void tambahUrut(){
	int dat, ind;
	node *baru, *pos1, *pos2;
	baru = new node;
	cout << "NBI  : ";
	cin >> dat;
	cout << "Nama : ";
	scanf(" %[^\n]s", &baru->nama);
	baru->NBI = dat;
	baru->next = NULL;
	ind = (dat % 11);
	
	pos1 = awal[ind]; 
	pos2 = pos1;
	
	if (awal[ind]==NULL){
		awal[ind]=baru;		
	} else {
		
   		while ( pos1!=NULL && pos1->NBI < baru->NBI ){
     		pos2=pos1;
     
        	pos1=pos1->next;
   		}
   		baru->next=pos1;
   		if (pos1!=awal[ind]){
   			pos2->next=baru;	
		} else {
			awal[ind]=baru;
		}
      		  
 	}

}

int main(){
	
	for (int a = 0; a < 5; a++){
		awal[a] = NULL;
		
		int pil;
		while(pil != 3){
			system("cls");
			cout << "1. Tambah Urut" << endl;
			cout << "2. Tampil Hash" << endl;
			cout << "3. Exit" << endl;
			
			cout << "Pilihan : ";
			cin >> pil;
			
			if (pil == 1){
				tambahUrut();
			} else if (pil == 2){
				tampil();
			}
			getch();
		}
	}
} 
