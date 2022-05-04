#include<iostream>
using namespace std;

struct node{
	int data;
	
	node *next; //menyimpan alamat dari list selanjutnya yang bertipe node
};

node *first;//patokan atau membuat kepala list

void insertFirst(node *p)
{
	p->next = first; // dibaca p dibagian next
	
	first = p;
}

int main(){
	node *z;
	z = new node;
	z->data = 10;
	insertFirst(z);
	
	z = new node;
	z->data = 20;
	insertFirst(z);
}
