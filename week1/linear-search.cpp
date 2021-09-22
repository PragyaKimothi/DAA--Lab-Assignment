#include<bits/stdc++.h>
using namespace std;
void  linearSearch(int arr[],int n, int x)
{
    int comp=0;
    bool count=true;
    for(int i=0; i<n; i++)
    {
        comp++;
        if(arr[i]==x)
        {
        cout<<endl<<"Element found at the index: "<<i<<endl<<"Total no of comparisons are:  "<<comp;
        count=false;
        break;
        }

    }
    if(count)
    cout<<"Number is not present."<<endl<<"Total no of comparisons are:  "<<comp;;

}
int main()
{
    int n, t, x;
    cout<<"Enter the Number of Test Cases:  ";
    cin>>t;

    while (t--)
    {
            cout<<endl<<"Enter the Size of Array:   ";
            cin>>n;
            int arr[n];
            for(int i=0; i<n; i++)
            {
                cin>>arr[i];
            }
            cout<<endl<<"Enter the number to be searched: ";
            cin>>x;
        linearSearch(arr, n, x);
    }

    return 0;
}
