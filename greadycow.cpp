#include <iostream>
#include <set>
#include <map>
using namespace std;
bool rex(int d,set<int>  &arr,int cows)
{

 auto start = arr.begin();
        cows--;
      
        for (auto itr = ++arr.begin(); itr != arr.end(); itr++)
        {
            if (d <= *itr - *start)
            {
                start = itr;
                cows--;
            }
            if (cows==0)
            {
                return true;

            }
        }
        if(cows!=0)
        {
            return false;
        }

} 


int main()
{
    int x, y, z, cows;
    cin >> x;
    while (x--)
    {

        cin >> y >> cows;

        set<int> arr;
        //int l = y;
        while (y--)
        {
            cin >> z;
            arr.insert(z);
        }
       
     int l=0,r=*(arr.rbegin()) - *(arr.begin());
     // int mid= *(arr.end()) - *(arr.begin())/2;
     while (l <= r) {
        int m = l + (r - l) / 2;
        bool x=rex(m,arr,cows);
        
        if (!rex(m+1,arr,cows) && x)
           cout<< m<<endl;
  
       
        if (x)
            l = m +1 ;
  
        
        if(!x)
            r = m -1;
    }
    }
    return 0;
}
