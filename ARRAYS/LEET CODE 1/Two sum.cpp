class solution{
  public:
  vector <int> twosum(vector<int>& nums, int target){
    int n= nums.size();// Take the size of nums.
    
    map<int,int>mp;// Initiallaization of map [mp] with two value.
    // Ittrate the loop from 0 to n and find out reaminig value 
    for(int i=0;i<n;i++){
      int remaning = target - nums[i];
      // If remaning value is not present in the map [mp]
      if(mp.find(remaning)!=mp.end())
        // then return your ans..
        return {mp[remaning],i};
      // or save the value of i in the map[mp]
      mp[nums[i]]=i;
    }
    
     return {}
  }
};
// TIME COMPLEXITY OF THIS SOLUTION IS O(n)....
