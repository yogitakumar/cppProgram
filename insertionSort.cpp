#include<iostream>  
using namespace std;  
int main ()  
{    
    int arr[10],n;
  cout<<"Enter the size of array : ";
   cin>>n;
   
    cout<<"Enter array elements\n";
   for(int i=0; i<n; i++){
      cout<<"aar["<<i<<"] : ";
      cin>>arr[i];
   }
   
   cout<<"Array after insertion : \n";
   for(int i=0; i<n; i++){
      cout<<arr[i]<<"\t";
      
   }
       
   
    for(int k=1; k<n; k++)   
    {  
        int temp = arr[k];  
        int j= k-1;  
        while(j>=0 && temp <= arr[j])  
        {  
            arr[j+1] = arr[j];   
            j = j-1;  
        }  
        arr[j+1] = temp; 
        
    }  
    cout<<"\nSorted array is : \n";
    for(int i=0;i<n;i++)  
    {  
        cout <<arr[i]<<"\t";  
    }  
}