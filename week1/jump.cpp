#include<bits/stdc++.h>
using namespace std;
void jumpSearch(int arr[],int n, int num)
{
    int steps=sqrt(n);
    int flag=0, swaps=0;
    int prev=0;
   while (arr[min(steps, n)-1]<num)
   {
       swaps++;
       prev=steps;
       steps+=sqrt(n);
       if(prev>=n)
       {
           break;
       }

   }

   while(arr[prev]<num)
   {
       prev++;
       swaps++;
        if(prev==min(steps,n))
        {
            break;
        }

    }
    if(arr[prev]==num)
        {
            flag=1;

        }
    cout<<(flag?"Present:   ":"Not present:  ")<<swaps;

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
        jumpSearch(arr, n, num);
    }
    return 0;
}
