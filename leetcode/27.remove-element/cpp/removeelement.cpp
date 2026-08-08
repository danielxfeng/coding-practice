#include <vector>

class Solution
{
public:
    int removeElement(std::vector<int> &nums, int val)
    {
        return removeElementOptimized(nums, val);
    }

private:
    // N, 1
    int removeElementOptimized(std::vector<int> &nums, int val)
    {
        int retainedCount = 0;

        for (int i = 0; i < nums.size(); ++i)
        {
            if (nums[i] == val)
                continue;

            swap(nums, i, retainedCount);
            retainedCount++;
        }

        return retainedCount;
    }

    void swap(std::vector<int> &nums, int a, int b)
    {
        int temp = nums[a];
        nums[a] = nums[b];
        nums[b] = temp;
    }
};
