#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

int main(){
	
	srand(time(0));
	//selection sort
	int lim = 10;
	int angka[lim];
	
	//mengisi variabel
	for(int i = 0; i < lim; i++){	
		angka[i] = (rand()%9) + 1;
	}
	
	//tampil array sebelum sort
	cout << "Sebelum Sort : \n";
	for(int i = 0; i < lim; i++){
		cout << angka[i];
		if(i != (lim-1)){
			cout << ", ";
		}
	}
	
	
	//algoritma selection sort
	cout << "\n\nAlgortima Bubble:\n";
	for(int i = 0; i < (lim-1); i++){
		//seleksi nilai
		int pos = i;
		
		if(i == 0){
			cout << "pos awal = " << angka[pos] << endl;
		}
		
		//seleksi indeks terbesar
		for(int j = (i+1); j < lim; j++){
			if(angka[pos] > angka[j]){
				pos = j;
			}
		}
		
		//swap
		int temp = angka[i];
		angka[i] = angka[pos];
		angka[pos] = temp;
		
		
		for(int x = 0; x < lim; x++){
			cout << angka[x];
			if(x != (lim-1)){
				cout << ", ";
			}
			
		} 
		cout << "\tpos = " << angka[pos];
		cout << endl;
	}   
	
	cout << "\n\nSetelah Sort :\n";
	//tampil array setelah sort
	for(int i = 0; i < lim; i++){
		cout << angka[i];
		if(i != (lim-1)){
			cout << ", ";
		}
	}            
}
