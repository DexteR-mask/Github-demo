#include <iostream>
#include <vector>

using namespace std;




 string reverseWords(string s) {
        vector <string> a;
        int start=0;
        int j=0;
        string ans="";
        s=s+" ";

               for(int i=0;i<s.length();i++)
        {
            
            if(s[i]== ' '){
                
                a.push_back(s.substr(start,i));
                j++;
                start=i;
               
            }
            
            
        }
        //print vector a
        for(int i=a.size()-1;i>=0;i--)
        {
            a[i].erase(remove_if(a[i].begin(), a[i].end(), isspace), a[i].end());
            ans=ans+a[i]+" ";

        }
        ans.pop_back();
        return ans;
        
        

    }

int main()
{

cout<<reverseWords("hello vdve  e     dv      world");


    return 0;
}