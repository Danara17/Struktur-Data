#include<iostream>
using namespace std;

#include<string.h>
int main(){
	char nama[]=  "Abdul";
	char dum[]="";
	cout << "1. "<< nama << endl;
	
	strcpy(nama, dum);
	cout << "2. " << nama;
}
