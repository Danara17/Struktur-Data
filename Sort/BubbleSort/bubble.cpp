#include<iostream>
#include<time.h>
#include<stdlib.h>
using namespace std;
int main(){
	srand(time(0));
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
	//algortima bubble sort
	cout << "\n\nAlgortima Bubble:\n";
	for(int a = 1; a <= lim; a++){
		
		for (int b = 0; b < lim-a; b++){
			
			if (angka[b] > angka[b+1]){
				
				int temp = angka[b];
				angka[b] = angka[b+1];
				angka [b+1] = temp; 
				
			}
		}	
		for(int x = 0; x < lim; x++){
			cout << angka[x];
			if(x != (lim-1)){
				cout << ", ";
			}
		} 
		cout << endl;
	} 
	//tampil setelah sort
	cout << "\n\nSetelah Sort : \n";
	for(int i = 0; i < lim; i++){
		cout << angka[i];
		if(i != (lim-1)){
			cout << ", ";
		}
	}
}
