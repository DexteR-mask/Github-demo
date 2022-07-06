#include <iostream>
#include <typeinfo>
#include <math.h>
using namespace std;
#define Tprint(x) print<x>(#x)
template <typename T>
void foo(T) {
  cout <<typeid(T).name()<<" : "<< int(sizeof(T))*8<<" bits "<<sizeof(T)<<" bytes"<<"\n";
  if(string(typeid(T).name())=="int")
  {
   cout<<fixed<<""<<int(pow(2,(int(sizeof(T))*8-1)))<<"  to "<<int(pow(2,(int(sizeof(T))*8-1))-1)<<"\n" ;
  }
}
int main()
{
 string j="sc";
int s;
float q;
bool z;
long long  int x;
long  t;
char w;
foo(t);
foo(x);
foo(w);
foo(s);
foo(q);
foo(z);
foo(j);
   



    return 0;


}