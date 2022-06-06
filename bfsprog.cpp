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

    list<int> que;
    que.push_back(s);
    vis[s] = 1;


    while (!que.empty())
    {
        int w = *(que.begin());
        cout << w<<" ";
        que.pop_front();
        for (int x : arr[w])
        {
            if (vis[x] == 0)
            {
                vis[x] = 1;
                que.push_back(x);
            }
        }
    }
}
