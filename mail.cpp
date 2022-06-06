#include <iostream>
#include <vector>
#include <map>
using namespace std;
int j(int);
void swap(int *a, int *b)
{

    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}
int main()
{
    int a;
    int x, sum;
    int y = 0;
    double av;
    std::cin >> a;
    int *arr = new int[a];
    for (int i = 0; i < a; i++)
    {
        cin >> x;
        arr[i] = x;

    }
    cout <<endl;
    for (int i = 0; i < a; i++)
    {

        for (int j = 1; j < a - i; j++)
        {
            if (arr[j - 1] > arr[j])
            {
                swap(arr[j - 1], arr[j]);
            }
        }
    cout<<" pass "<<i+1<< " : ";
        for (int x = 0; x < a; x++)
        {

            if (x >= a - i-1)
            {
                cout << "_" << arr[x] ;
            }

            else
            {
                cout << arr[x] << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
