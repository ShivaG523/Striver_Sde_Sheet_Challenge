class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector <int> r;
        vector <int> c;
        int m=matrix.size();
        int n=matrix[0].size();
      for(int i=0;i<m;i++){
          for(int j=0;j<n;j++){
              if(matrix[i][j]==0){
                  r.push_back(i);
                  c.push_back(j);
              }
                  
          }
      }
         for(int i=0;i<r.size();i++){
        for(int j=0;j<matrix[0].size();j++){
        int k=r[i];
              matrix[k][j]=0;
        
          }
         }
         for(int i=0;i<c.size();i++){
        for(int j=0;j<matrix.size();j++){
        int k=c[i];
              matrix[j][k]=0;
        
          }
         }
    }
};