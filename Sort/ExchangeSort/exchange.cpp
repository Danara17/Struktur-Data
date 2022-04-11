#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

int main(){
	srand(time(0));
	
	int lim = 10;
	int angka[lim];
	
	cout << "Sebelum Sort : \n";
	for(int i = 0; i < lim; i++){
		angka[i] = (rand()%9)+1;
		cout << angka[i];
		if(i != (lim-1))
			cout << ", ";
	}	
	
	cout << "\n\nAlgoritma Exchange:\n";
	for(int i = 0; i < (lim-1); i++){
		for(int j = i+1; j < lim; j++){
			if(angka[i] > angka[j]){
				int temp = angka[i];
				angka[i] = angka[j];
				angka[j] = temp;
			}
		}
		for(int k = 0; k < lim; k++){
			cout << angka[k];
			if(k != (lim-1)){
				cout << ", ";
			}
		}
		cout << endl;
	}
	
	cout << "\nSetelah Sort : \n";
	for(int i = 0; i < lim; i++){
		cout << angka[i];
		if(i != (lim-1)){
			cout << ", ";
		}
	}
}
