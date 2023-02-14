class solution{
  public:
  string count&say(int n){
    if (n==1)
      return "1";
    string say = count&say(n-1);
    
    // Processing the code ;
    
    string result = "";
    
    // Illtarte the loop from 0 to say.length 
    for(int i=0;i<say.length();i++){
      char ch=say[i];
      int count = 1;
      while(i<say.length()-1 && say[i]==say[i+1]){
        count++;
        i++;  }
    }
      result+= to_string(count) + string(1,ch);
  }
  
};
// TIME COMPLEXCITY OF WHOLE CODE IS O(n*2^n).....

