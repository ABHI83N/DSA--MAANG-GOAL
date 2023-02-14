class Solution{
  public:
  vector<int> twoSum(vector<int> & nums,int target){
    int n = nums.size();// Take the size of nums array.
    // Inilization of two variables i and j
    int i=0;
    int j=n-1;
    
    // Run the while loop untill i<j || i=j .
    while(i<=j){
      // If sum of i and j is == target then return ans with +1 indexing
      if (nums[i]+nums[j]==target){
        return {i+1,J+1};}
      
      // else if sum is greater than target then decremnt j--.
      else if(nums[i]+nums[j]>target){
        j--;
      }
      
      // and if sum is less then target then increment the i++;
      else if (nums[i]+nums[j]<target){
        i++;}
    }
    
    return{1};
  }
};

// TIme COMPLEXITY IS THIS SOLUTION IS O(n)..
        
