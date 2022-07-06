#include <vector>
#include <stdio.h>
#include <iostream>


using namespace std;


    int pivotIndex(vector<int>& nums) {
        int *Left= new int[nums.size()] ,*Right= new int[nums.size()];
        int len=nums.size();
        Right[0]=nums[0];
        //Left={};
        Left[len-1]=nums[len-1];
        for (int i =0,j=len-1;i<len-1 &&j>0;i++,j--)
        {
             Left[i]=nums[j]+nums[j-1];
            Right[i+1]=nums[i]+nums[i+1];
        }
        for(int j=0;j<len;j++)
        {
            if(Left[j]==Right[j])
            {
                return j;
            }
        }
        return -1;
    }

int main()
{
    vector<int> nums={
        1,7,3,6,5,6
    };
    cout<<pivotIndex(nums);
}