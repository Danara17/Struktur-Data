#include <iostream>
#include <conio.h>
using namespace std;

int stack[4],top=-1;

int isempty()
{
	if (top==-1)
	  return 1;
	else
	   return 0;  
}
  
int isfull()
{
	if (top==3)
	  return 1;
	else
	   return 0;  
}
void pop()
{
	if (isempty())
	   cout<<"Stack Kosong";
	else
	   top--;   
}


void push(int dat)
{
	stack[top]=dat;
}

void tampil()
{
	if (isempty())
	   cout<<"Stack Kosong";
	else
	   for (int i=top;i>=0;i--)
	       cout<<stack[i]<<"   ";
}

int main()  
{
  int pil=1,data;
  while(pil!=4)
  {
     system("cls");
     cout<<"1.PUSH\n";
     cout<<"2.Tampil Isi STACK\n";
     cout<<"3.POP\n";
     cout<<"4.Exit\n\n";
     cout<<"Pilihan Anda = ";
     cin>>pil;
     if(pil==1)
     {
     	if (isfull())
//      if (top==3)
     	    cout<<"Stack Full";
     	else
		{
		  top++;
		  cout<<"Masukkan Nilai = ";
		  cin>>data;
		  push(data);
		  // cin>>stack[top};
		}
	 }
     else if(pil==2)
          tampil();
     else if(pil==3)
          pop();
     getch();
  }
   return 0;    
   
}


