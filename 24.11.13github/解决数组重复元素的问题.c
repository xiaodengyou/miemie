int removeDuplicates(int* nums, int numsSize)
{
    int i = 0;
    int j = 0;
    int count = 1;
    for (j = 1; j < numsSize; j++)
    {
        if (nums[i] != nums[j])
        {
            i++;
            nums[i] = nums[j];
            count++;
        }
    }
    return count;
}