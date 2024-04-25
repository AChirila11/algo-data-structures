class Solution {
public:
    int search(vector<int>& nums, int target) {
		//algoritmul are complexitatea de timp O(logn) si complexitate spatiu O(1)
		int high= nums.size()-1;
        int low=0;
        int i=(high+low)/2;
        do
        {
            i=(high+low)/2;
            if(target>nums[i])
            {
                low=i+1;
                
            }
            else
            if(target<nums[i])
                {
                    high=i-1;
                   
                }
                else
                return i;
        }while(low<=high);
        return -1;
    }
    
};