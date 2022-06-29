class Solution {
public:
    int twoEggDrop(int n) {
        int drops = 0;
        while (true)
        {
            if (drops * (drops + 1) / 2 < n)
            {
                drops++;
            }
            else
            {
                return drops;
            }
        }
    }
};