//Insertion Sort

#include<iostream>  
using namespace std;  
int main ()  
{   
    int i, n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int myarray[n];   
    cout<<"Enter the elements: \n";
   for(i=0;i<n;i++)
   {
       cin>>myarray[i];
   }
       
    cout<<"\nInput list is \n";
    for(int i=0;i<n;i++)  
    {  
        cout <<myarray[i]<<"\t";  
    }    
    for(int k=1; k<n; k++)   
    {  
        int temp = myarray[k];  
        int j= k-1;  
        while(j>=0 && temp <= myarray[j])  
        {  
            myarray[j+1] = myarray[j];   
            j = j-1;  
        }  
        myarray[j+1] = temp;  
    }  
    cout<<"\nSorted list is \n";
    for(int i=0;i<n;i++)  
    {  
        cout <<myarray[i]<<"\t";  
    }  
}
