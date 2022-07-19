#include <iostream>
//import to_string
#include <sstream>
using namespace std;
int input(int a)
{
 

cin>>a;
//a to string
string s=to_string(a);
// find length of s
int l=s.length();
//loop 0 to l-1
int sum=0;
for(int i=0;i<l;i++)
{ 
    sum=sum+s[i]-'0';
  
}
//return sum
return sum;
}

int main()

{


    cout<<input( 65);

}