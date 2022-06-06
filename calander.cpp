#include <iostream>
#include <list>
#include <map>
#include <string>
using namespace std;


 
void avialble(string p1[],string p2[],string output[]){


for(int i=0;i<p1->size()-1;i++)
{
cout<<p1[i]<<" \n";
p1[i]=p1[i]+"u";
cout<<p1[i]<<" \n";
}



}


int main()
{
 
string P1[]={"9:00","10:00","11:30","12:00"};

string P2[]={"10:30","11:00","11:30","12:30"};

string output[10];
avialble(P1,P2,output);
for(int i=0;i<P1->size();i++)
{
cout<<P1[i]<<" \n";

}
return 0;
  
 


}