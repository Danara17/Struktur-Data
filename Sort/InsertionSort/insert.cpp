#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
int main()
{
    int lim = 10;
    int angka[lim], i, j, k, elem, index;    
    //isi array
    cout<<"Sebelum Sort:\n";
    for(i=0; i<lim; i++){
        angka[i]= (rand()%9)+1;
        cout << angka[i];
        if(i != lim-1){
            cout << ", ";
            }
        }      
    cout << endl;
    cout << "\n\nAlgoritma Sort: \n";  
    //algoritma insert sort
    for(i=1; i<lim; i++)
    {
    	int dum;
        elem = angka[i];
        if(i == 1){
        	cout << "Elem Awal : " << elem << endl; 
		}		
        if(elem < angka[i-1])
        {
            for(j=0; j<=i; j++)
            {
                if(elem<angka[j])
                {
                	dum = elem; 
                    index = j;
                    for(k=i; k>j; k--)
                        angka[k] = angka[k-1];
                    break;
                }
            }
        }       
        else
            continue;          
        angka[index] = elem;       
        // tampil sort
        for(int i = 0; i < lim; i++){
            cout << angka[i];
            if(i != lim-1){
                cout << ", ";
                }
            }
            cout << "\telem :  " << dum << endl;
    }
    //tampil sort
    cout<<"\n\nSetelah Sort :\n";
    for(i=0; i<lim; i++)
        cout<<angka[i]<<"  ";
    cout<<endl;
    return 0;
}
