#include <iostream>
#include <string>
using namespace std;
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
    int arr[10];
    for (int i = 0; i < a; i++)
    {
        cin >> x;
        arr[i] = x;
    }
    int temp;
    for (int i = 0; i < a - 1; i++)
    {
        stack

        for (int j = i; j >= 0; j--)
        {
            if (arr[j + 1] < arr[j])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
    for (int i = 0; i < a; i++)
    {

        cout << arr[i] << " ";
    }

    // your code goes here
    return 0;
}
