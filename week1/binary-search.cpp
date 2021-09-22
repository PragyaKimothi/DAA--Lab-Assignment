// Implementing binary search to search an element in a given sorted array

#include<bits/stdc++.h>
using namespace std;
void binarySearch(int arr[],int n, int num)
{
    int l=0;
    int r=n;
    int c=1, swaps=0;
    sort(arr, arr+n);
    for(int i=0; i<n; i++)
    {

        if (l<r)
        {
            ++swaps;
            int mid=(l+r)/2;
            if(num==arr[mid])
            {
                cout<<"Number is present. "<<endl<<"Number of Swaps are:   "<<swaps+1;;
                c=0;
                break;
            }
            else if(num < arr[mid])
            r=mid-1;

            else
            l=mid+1;

        }
    }
    if(c)
    cout<<"Number is not present."<<endl<<"Number of Swaps are:   "<<swaps;
}
int main()
{
    int t, num, n;
    cout<<"Enter the Test cases:    ";
    cin>>t;
    while(t--)
    {
            cout<<endl<<"Enter the Size of Array:   ";
            cin>>n;
            int arr[n];
            for(int i=0; i<n; i++)
            {
                cin>>arr[i];
            }
            cout<<endl<<"Enter the number to be searched: ";
            cin>>num;
        binarySearch(arr, n, num);
    }



    return 0;
}
