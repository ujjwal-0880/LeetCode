class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxWater = 0;
        int left = 0;
        int n = height.size();
        int right = n - 1;
        while(left<right){
            int w = right - left;
            int h = min(height[left] , height[right]);
            int currWater = h*w;
            maxWater = max(maxWater,currWater);
            height[left]<height[right]?left++:right--;
        }
        return maxWater;
    }
};