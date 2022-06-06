#include <iostream>
#include <list>
#include <map>

using namespace std;
int main()
{
    int x,s,q;
    cin >> x>>s;
    list<int> *arr = new list<int>[x + 1];
    int *vis = new int[x + 1];
    int *in =new int [x+1];
    int w, e, z;
    q=x;
    for(int i=1;i<=x+1;i++)
    {
        in[i]=0;
    }
    while (x--)
    {
        vis[x+1] = 0;
        cin >> w >> e;
        
        while (e--)
        {
            cin >> z;
             in[z]++;
            arr[w].push_back(z);
        }
    }



{

}

    list<int> que;
    list<int> ans;
    for(int i=1;i<=q;i++)    
    {
        if(in[i]==0)
        {
            que.push_back(i);
        }
    }
    
while (!que.empty())
{
    int c =*que.cbegin();
   que.pop_front();
   ans.push_back(c);
   for(auto  i=arr[c].begin();i!=arr[c].end();i++)
   {
    in[*i]--;
    if(in[*i]==0)
    {
        que.push_back(*i);
    }
   }
}


 


    for(int u:ans )
    {
        cout<<u<<" ";
    }
    return 0;

}