#include <iostream>
using namespace std;

int binarySearch(int[], int, int, int);

int main()
{
   int arr[10];
   int search_num, loc=-1, n;
   
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

   cout<<"\nEnter the number that you want to search: ";
   cin>>search_num;

   loc = binarySearch(arr, 0, n, search_num);

   if(loc != -1)
   {
      cout<<search_num<<" found in the array at the location: "<<loc;
   }
   else
   {
      cout<<"Element not found";
   }
   return 0;
}

int binarySearch(int arr[], int first, int last, int search_num)
{
   int middle;
   if(last >= first)
   {
      middle = (first + last)/2;
      //Checking if the search element is present at middle of array
      if(arr[middle] == search_num)
      {
         return middle+1;
      }

      //Checking if the search element is present in greater half
      else if(arr[middle] < search_num)
      {
         return binarySearch(arr,middle+1,last,search_num);
      }

      //Checking if the search element is present in lower half
      else
      {
         return binarySearch(arr,first,middle-1,search_num);
      }

   }
   return -1;
}