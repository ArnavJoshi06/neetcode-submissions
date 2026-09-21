class Solution {
public:
    void sortColors(vector<int>& nums) {
        int count0 = 0;
        int count1 = 0;
        int count2 = 0;
        for(int i = 0; i < nums.size(); i++)
        {
            if(nums[i] == 0)
            {
                count0++;
            }
            else if(nums[i] == 1)
            {
                count1++;
            }
            else
            {
                count2++;
            }
        }

        int i = 0;
        while(count0 != 0 || count1 != 0 || count2 != 0)
        {
            if(count0 != 0)
            {
                nums[i] = 0;
                i++;
                count0--;
            }
            else if(count1 != 0)
            {
                nums[i] = 1;
                i++;
                count1--;
            }
            else
            {
                nums[i] = 2;
                i++;
                count2--;
            }
        }
    }
};