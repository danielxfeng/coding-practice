#include <vector>
#include <algorithm>

class Solution
{
public:
    std::vector<int> sortedSquares(std::vector<int> &nums)
    {
        return sortedSquaresOptimized(nums);
    }

private:
    // N, N
    std::vector<int> sortedSquaresOptimized(std::vector<int> &nums)
    {
        std::vector<int> arr(nums.size());
        int size = static_cast<int>(nums.size());

        int l = 0;
        int r = size - 1;
        int n = size - 1;

        while (n >= 0)
        {
            int sl = nums[l] * nums[l];
            int sr = nums[r] * nums[r];

            if (sl > sr)
            {
                arr[n] = sl;
                l++;
            }
            else
            {
                arr[n] = sr;
                r--;
            }

            n--;
        }

        return arr;
    }

    // NLogN, N
    std::vector<int> sortedSquaresBruteForce(std::vector<int> &nums)
    {
        std::vector<int> arr(nums.size());
        std::transform(nums.begin(), nums.end(), arr.begin(), &square);
        std::sort(arr.begin(), arr.end());

        return arr;
    }

    static int square(int n)
    {
        return n * n;
    }
};