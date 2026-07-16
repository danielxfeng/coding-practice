#include <string>
#include <array>

class Solution
{
public:
    bool canConstruct(std::string ransomNote, std::string magazine)
    {
        std::array<int, 26> arr{};

        for (auto it = ransomNote.begin(); it != ransomNote.end(); ++it)
            arr[dist(*it)]++;

        for (auto it = magazine.begin(); it != magazine.end(); ++it)
            arr[dist(*it)]--;

        return std::find_if(arr.begin(), arr.end(), [](int v)
                            { return v > 0; }) == arr.end();
    }

private:
    int dist(char ch)
    {
        return (int)(ch - 'a');
    }
};
