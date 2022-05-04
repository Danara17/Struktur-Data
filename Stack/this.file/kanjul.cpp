#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <conio.h>

struct {
    int usia;
    char nama[30];
}KTP[5];

void dequeue();
void enqueue(char _nama[30],int _usia);
int maks = 5;
int front = 0;
int back = 0;

bool isFull(){
	if(back == maks){
		return true;
	}else{
		return false;
	}
}

enum {
    DEQUEUE=2,
    ENQUEUE=1,
    PEEK=3,

};

bool isEmpty(){
	if(back == 0){
		return true;
	}else{
		return false;
	}
}

int main (){
    int pil;
    while(pil !=4){
        system("cls");
        for(int i = 0; i < back; i++){
            printf("%i. Nama : [%s] [%i]\n", i+1, KTP[i].nama, KTP[i].usia);
        }
        printf("~~~~~~~~~~\n");
        printf("1. enqueue\n");
        printf("2. dequeue\n");
        printf("3. peek\n");
        printf("4. exit\n");
    	printf("masukkan pilihan: ");
    	scanf("%i", &pil);
   		switch (pil){
        	case DEQUEUE:
            	{
            		if(isEmpty()){
	            		printf("antrian kosong");
	            	} else{
	               		dequeue();
	            	}
            		getch();
           			break;
				}
        	case ENQUEUE:
            	if(isFull()){
               		printf("antrian penuh");
            	}else{
                	char dataNama[30];
                 	int dataUsia;
                 	printf("masukkan nama : ");
                 	scanf(" %[^\n]s" ,&dataNama);
                 	printf("masukkan usia : ");
                 	scanf("%i", &dataUsia);
       		        enqueue(dataNama,dataUsia);
            	}
            	getch();
            	break;
        	case PEEK:
            	if(isEmpty()){
                    printf("data masih kosong");
            	}else{
            		int cari;
                    printf("cari data : ");
                    scanf("%i", &cari ) ;
                    cari--;
                    printf("\tNama : %s [%i]",KTP[cari].nama, KTP[cari].usia);
            	}
        		getch();
        		break;
   		}
	}
}

void dequeue(){
    for(int index = 0; index < back; index++){
	    if (index == 0){
	        printf("Data Berhasil Dihapus\n");
	    }
	    KTP[index] = KTP[index+1];
	}
	back--;
}


void enqueue(char _nama[30],int _usia){
    if(isEmpty ()){
        KTP[0].usia = _usia;
        strcpy(KTP[0].nama, _nama);
        front++;
        back++;
        printf("data berhasil dimasukkan");
    }else{
        KTP[back].usia = _usia;
        strcpy(KTP[back].nama, _nama);
        back++;
        printf("data berhasil dimasukkan");
    }
};
