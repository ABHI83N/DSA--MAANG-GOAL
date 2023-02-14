class Solution{
  public:
  vector<vector<int>> result;// Create a result vector
  
  // Create a function which gives a sum of [N2+N3]
  viod twosum(vector<int>& nums , int target , int i , int j){
    while(i<j){
      if(sum[i]+sum[j]>target){
        j--;}
      else if(sum[i]+sum[j]<target){
        i++;}
      
      // Here we check if i ==i+1 then increment the i by 1 && if j == j-1 then decremnt the j by 1.
      else{
        while(i<j  && nums[i]==nums[i+1])i++;
        while(i<j && nums[j]==nums[j-1])j--;
         
          result.push_back({-target,nums[i],nums[j]});
      
      i++;
      j--;
    }
      
   }
  }
  
  vector<vector<int>> threesum(vector<int>& nums){
    int n = nums.size();
   
    // if size of arr is less then 3 then return nothing
    if(n<3){
      return {};
    }
    
    result.clear();
    // sort the nums array
    
    sort(nums.begin(),nums.end());
    
    //Fixing one element.
     for( int i =0; i <n-3;i++){
       if(i>0 && nums[i]==nums[i-1]){countinue;}
    int n1= nums[i];
    int target = - n1;
       
       twosum(nums,target,i+1,n-1);// It will  a sum of [n2+n3]: resturn [n1,n2,n3]
     }
    return result;
  }
};
// TIME COMPLEXITY OF THIS CODE IS O(n^2)..... BECAUSE WE USE NESSTED LOOP>>
    
    
