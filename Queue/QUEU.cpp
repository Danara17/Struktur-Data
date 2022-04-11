#include <iostream>
#include <conio.h>
using namespace std;

int que[5],rear=-1,front=-1;

int isempty()
{
	if (rear==-1)
	  return 1;
	else
	   return 0;  
}
  
int isfull()
{
	if (rear==4)
	  return 1;
	else
	   return 0;  
}
void dequeue()
{
	if (isempty())
	   cout<<"Queue Kosong";
	else
	   if(front==rear)
		  rear=front=-1;
	   else
	      front++;
		     
}


void enqueue(int dat)
{
	que[rear]=dat;
}

void tampil()
{
	if (isempty())
	   cout<<"Queue Kosong";
	else
	{
		cout<<"  Front <--   ";
		for (int i=front;i<=rear;i++)
	       cout<<que[i]<<"   ";
	    cout<<"--> Rear" ;  
	}
}

int main()  
{
  int pil=1,data;
  while(pil!=4)
  {
     system("cls");
     cout<<"1.EnQueue\n";
     cout<<"2.Tampil Isi QUEUE\n";
     cout<<"3.DeQueue\n";
     cout<<"4.Exit\n\n";
     cout<<"Pilihan Anda = ";
     cin>>pil;
     if(pil==1)
     {
     	if (isfull())
     	    cout<<"Stack Full";
     	else
		{
		  if(rear==-1)
		    front++;	
		  rear++;
		  cout<<"Masukkan Nilai = ";
		  cin>>data;
		  enqueue(data);
		}
	 }
     else if(pil==2)
          tampil();
     else if(pil==3)
          dequeue();
     getch();
  }
   return 0;    
   
}


