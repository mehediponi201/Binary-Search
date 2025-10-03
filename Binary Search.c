
#include<stdio.h>
int binarySearch(int nums[],int target,int len)
{
    int left=0,right=len-1;
    while(left<right)
    {
        int mid = (left+right)/2;
        if(nums[mid] == target)
        {
            return mid;
        }
        else if(nums[mid] < target)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }
    return -1;
}
int main()
{
    int nums[] = {10,20,30,40,50,60,70};
    int target = 60;
    int len = sizeof(nums)/sizeof(nums[0]);

    int index = binarySearch(nums,target,len);

    printf("Index is: %d\n",index);
}
