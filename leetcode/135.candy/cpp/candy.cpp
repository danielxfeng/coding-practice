#include <vector>
#include <numeric>

class Solution
{
public:
    int candy(std::vector<int> &ratings)
    {
        std::vector<int> candyArr(ratings.size(), 1);

        for (int i = 1; i < ratings.size(); i++)
        {
            if (ratings[i] > ratings[i - 1])
                candyArr[i] = candyArr[i - 1] + 1;
        }

        for (int i = ratings.size() - 2; i >= 0; i--)
        {
            if (ratings[i] > ratings[i + 1] && candyArr[i + 1] + 1 > candyArr[i])
                candyArr[i] = candyArr[i + 1] + 1;
        }

        return std::accumulate(candyArr.begin(), candyArr.end(), 0);
    }
};
