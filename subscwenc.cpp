#include <iostream>
#include <list>
#include <map>
#include <string>
using namespace std;

void sub (string i,string o[1000] ,string C[8])
{

  if(i.empty())
  {
    cout<<o;
  }
 else{
   string s ="";
   s+= i[0];
   
   sub(i.substr(1),o,C);
   sub(i.substr(1),o+i[0],C);
 


}
}
int main()
{
 string I,O[1000]={""} ;
 // cin >> I ;
string  C[] ={"abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"} ; 
 I="23";
 
  sub(I,O,C);
return 0;
  
 


}
