class solution{
  public:
   void rotate(vector<vector<int>>& matrix){
     int m=matrix.size();// We can take out size of 2D matrix                        
                                                                                     
     // Firstly we can transpose the matrix using 2 loop 'Diagonally';
     for(int i=0; i < m; i++){
       for(int j=i; i< m; j++){
         swap(matrix[i][j],matrix[j][i]);
       }
     }
     // Now as a result we can reverse our transposed matrix ;
     for(int i=0; i<m; i++){
       reverse(matrix[i].begin(),matrix[i}.end());
      }
   }
 };
     // TIME COMPLEXITY IS O(N^2) becasue it uses two nested loops;
