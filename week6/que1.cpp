#include<iostream>
#include<stack>
using namespace std;
int main()
 {
     int v;
     cin>>v;
     int g[v][v];
     for(int i =0;i<v;i++)
     {
         for(int j=0;j<v;j++ )
            cin>>g[i][j];
     }
    int d,s;
    cin>>s>>d;

    stack<int> st;
    int visited[v]={};
    for(int i =0;i<v;i++)
      visited[i] =0;
    st.push(s-1);
    visited[s-1] = 1;
    int c = s-1;
    while(!st.empty())
    {
        c = st.top();
        st.pop();
        for(int i = 0;i<v;i++)
        {
            if(g[c][i] != 0)
            {

                if(i == (d-1))
                  {
                      cout<<"Yes, path exists";
                      exit(0);
                  }
                else
                  {
                      if(visited[i]==0)
                       {
                        st.push(i);
                        visited[i]=1;
                       }
                  }
            }
        }
    }
    if(st.empty())
       cout<<"No such path exist";
 }
