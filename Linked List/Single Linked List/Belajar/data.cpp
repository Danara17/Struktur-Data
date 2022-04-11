#include<iostream>
using namespace std;

struct simpul{
	int x;
	
	simpul *next;
};

simpul *dum;

int main(){
	dum->x = 10;
	
	simpul *baru;

	baru->x = dum->x;
	
	cout << dum->x;
}
