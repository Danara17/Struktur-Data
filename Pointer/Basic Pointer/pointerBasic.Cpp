#include<iostream>
using namespace std;


int main(){
	
	int A = 10;
	
	cout << "A   = " << A << endl;
	cout << "&A  = " << &A << endl;
	
	int *alamat_A = &A;
	
	*alamat_A = 20; //mengubah isi A tanpa mengakses variabel A tetapi menggunakan alamat A (dereferencing)
	
	cout << "A   = " << A << endl;
	cout << "&A  = " << &A << endl;
}
