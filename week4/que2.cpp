#include<iostream>
using namespace std;
void quicksort(int [],int, int,int []);
int partition(int arr[], int l, int u, int c[])
{
  int pivot = arr[u];
  int i=l-1,j;
    for(j =l;j<u;j++)
    {

       if(arr[j]<=pivot)
        {
          i++;
          int t = arr[i];
          arr[i] = arr[j];
          arr[j] = t;
          c[0]++;
          c[1]++;
        }
        else{
          c[0]++;
        }
    }
    int t = arr[i+1];
    arr[i+1] = arr[u];
    arr[u] = t;
    c[1]++;
    return i+1;
}
void quicksort(int arr[], int l, int u,int c[])
{
  if(l<u)
  {
    int p = partition(arr,l,u,c);
    quicksort(arr, l, p - 1,c);
    quicksort(arr, p + 1, u,c);
  }
}

int main()
{
    int t;
    cout<<"Enter the test cases: ";
    cin>>t;
    while(t>0)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
           cin>>arr[i];
        int c[2] = {};
        quicksort(arr,0,n-1,c);
        for(int i =0;i<n;i++)
           cout<<arr[i]<<" ";
        cout<<"\ncomparisons="<<c[0]<<"\nSwaps="<<c[1]<<endl;
        cout<<endl;
           t--;

    }
}
