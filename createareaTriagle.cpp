#include <iostream>

using namespace std;
string input(int a)
{
    return a>90?"A":(a<90 && a>80?"B": a<80 && a>70?"C":a<70 && a>60?"D":"F");
}

int main()
{
    cout<<input( 65);

}