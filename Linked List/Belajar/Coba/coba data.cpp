#include<iostream>
using namespace std;

int main(){
	int x, y, z;
	int angka;
	cout << "nilai x : " << x << endl;
	cout << "nilai y : " << y << endl;
	cout << "nilai z : " << z << endl;
	cout << "Input angka : ";
	cin >> angka;
	cout << "x = y = z =  angka : " << endl;
	x=y=z=angka;
	cout << "nilai x : " << x << endl;
	cout << "nilai y : " << y << endl;
	cout << "nilai z : " << z << endl;
	
	x = 5; y = 6;
	x = angka = y;
	cout << "x = angka = y" << endl;
	cout << "nilai x : " << x << endl;
	cout << "nilai y : " << y << endl;
	cout << "Angka   : " << angka << endl;
}
