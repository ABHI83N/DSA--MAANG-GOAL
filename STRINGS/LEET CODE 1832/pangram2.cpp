class solution{
  public:
    bool Checkifpangram(string sentence){
      // Create vector arr with index of 26 and value in it is 0 .
      vector<int> arr(26,0);
      
      int count=0;
      // Traverse the sentence and subract each alphabate with 'a' and store in index;
      
      for(char &ch : sentence){
        int index = ch - 'a';
           arr[index]++;
      }
      
      // We have to travese a loop to check the each value of count is '0' or not if '0' then return false otherwise return true
      for(int &count : arr){
        if (count==0)
          return false;
    }
      return true;
};
  
  // TIME COMPLEXCITY OF THIS CODE IS ALSO O(n) but due to 2nd loop code might little slow.....
