#include <stdio.h>
using namespace std;
#include <array>
#include <vector>
#include <iostream>

int main()
{

    vector<vector<pair<int, int>>> x = {
        {},
        {make_pair(2, 4), make_pair(8, 8)},
        {make_pair(3, 8), make_pair(8, 11)},
        {make_pair(4, 7), make_pair(9, 2), make_pair(6, 4)},
        {make_pair(5, 9), make_pair(6, 14)},
        {make_pair(7, 10)},
        {make_pair(7, 2)},
        {make_pair(8, 1), make_pair(9, 6)},
        {make_pair(9, 7)},
        {}};

    int v[9] = {};
    int dis[9] = {0};
    fill(dis + 2, dis + 10, INT_MAX);
    int i = 1;
    int min1;
    while (v[i] != 1)
    {
        if (x[i].empty())
        {
            v[i] = 1;

            continue;
        }
        min1 = x[i][0].second;
        int w = x[i][0].first;

        for (auto z : x[i])
        {

            if (dis[z.first] > dis[i] + min(dis[z.first], z.second))
            {
                dis[z.first] = dis[i] + min(dis[z.first], z.second);
            }
            if (min1 > z.second && v[i] != 1)
            {
                w = z.first;
            }
        }
        v[i] = 1;
        i = w;
    }

    for (int i = 1; i <= 9; i++)
    {
        cout << i << " : " << dis[i] << "\n";
    }
    return 0;
}
