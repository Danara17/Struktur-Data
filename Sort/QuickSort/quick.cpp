#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

void quick(int arr[],int kiri, int kanan){
	int a = kiri, b = kanan;
	int tengah = arr[(kanan+kiri)/2];
	
	while(a < b){
		while(arr[a] < tengah){
			a++;
		}
		while(arr[b] > tengah){
			b--;
		}
		
		
		
		if(a <= b){
			int tmp = arr[a];
			arr[a] = arr[b];
			arr[b] = tmp;
			a++;
			b--;
		};
	
		
	}
	
	for(int i = 0; i < 10; i++){
		cout << arr[i];
		if(i != 9){
			cout << ", ";
		}
	}
	cout << endl;
	
	if(kiri < b){
		quick(arr, kiri, b);
	}
	if(a < kanan){
		quick(arr, a, kanan);
	}
	
}

int main(){
	srand(time(0));
	
	int lim = 10;
	int angka[lim];
	
	cout << "Sebelum Sort :\n";
	for(int i = 0; i < lim; i++){
		angka[i] = (rand()%9) +1;
		cout << angka[i];
		if(i != (lim-1)){
			cout << ", ";
		}
	}
	
	cout << endl << endl << "Algoritma Quick : \n";
	quick(angka, 0, lim);
	
	cout << "\nSetelah Sort :\n";
	for(int i = 0; i < lim; i++){
		cout << angka[i];
		if(i != lim-1){
			cout << ", ";
		}
	}
	
}
