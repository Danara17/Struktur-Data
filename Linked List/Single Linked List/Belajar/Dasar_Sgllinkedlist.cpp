#include<iostream>
using namespace std;

struct simpul{
	//data
	int nilaidalamnode;
	
	//pointer untuk menunjuk
	simpul *next;
};

simpul *node1, *node2, *node3;

int main (){
	
	//cara membuat suatu node
	//node1 = (simpul*) malloc (sizeof(simpul)); // cara 1
	node1 = new simpul();
	node2 = new simpul(); //cara 2
	node3 = new simpul();
	
	//mengisi node
		//node1 >> (HEAD / Awal)
		node1->nilaidalamnode = 10;
		node1->next = node2;
		
		//node2
		node2->nilaidalamnode = 3;
		node2->next = node3;
		
		//node3 >> (TAIL / Akhir)
		node3->nilaidalamnode = 20;
		node3->next = NULL;
	
	//cara menampilkan node dalam single linked list
		simpul *cur;
		cur = node1; //kenapa node1?? karena node1 adalah kepala dari linked list
					 // cur juga berisi seluruh dara dari node1
		
		while(cur != NULL){
			cout << "Nilai : " <<cur->nilaidalamnode << endl; // berisi nilai dalam node
			
			//menunjuk node yang akan ditampilkan selanjutnya
			cur = cur->next;
		}
} 
