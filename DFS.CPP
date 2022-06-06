#include <iostream>
#include <list>
#include <map>

using namespace std;
int main()
{
    int x,s;
    cin >> x>>s;
    list<int> *arr = new list<int>[x + 1];
    int *vis = new int[x + 1];
    int w, e, z;
    
    while (x--)
    {
        vis[x+1] = 0;
        cin >> w >> e;
        while (e--)
        {
            cin >> z;
            arr[w].push_back(z);
        }
    }
  list<int> stk;
stk.push_back(s);
vis[s]=1;


  while(!stk.empty())
{
   int q=*(stk.begin());
  if(vis[q]==0)
  {
      vis[q]=1;

      for(int x:arr[q])
      {
          
      }
  }
     


}










 



}