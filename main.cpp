#include <iostream>
#include <string>
using namespace std;

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
    int temp;
    for (int i = 0; i < a; i++)
    {
        int min = arr[i];
        int indexm = i;

        for (int j = i; j < a; j++)
        {
            if (arr[j] < min)
            {
                indexm = j;
                min = arr[j];
            }
        }

        arr[i]= arr[i]+min;
        min= arr[i]- min;
        arr[i] = arr[i]- min ;
        arr[indexm] = min;
    }
    for (int i = 0; i < a; i++)
    {

        cout << arr[i] << " ";
    }

    // your code goes here
    return 0;
}
