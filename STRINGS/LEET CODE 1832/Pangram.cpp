class solution{
  public:
    bool Checkifpangram(string sentence){
      // Create vector arr with index of 26 and value in it is 0 .
      vector<int> arr(26,0);
      
      int count=0;
      // Traverse the sentence and subract each alphabate with 'a' and store in index;
      
      for(char &ch : sentence){
        int index = ch - 'a';
        // After subraction if index value is '0' then increment index and count by 1;
         if(arr[index]==0){
           arr[index]++;
           count++;
         }
      }
       // Check if count value is 26 then return true othewise return false
      if(count==26)
        return true;
      return false;
    }
};
 
// TIME COMPLEXCITIY OF THIS CODE IS O(n).....
