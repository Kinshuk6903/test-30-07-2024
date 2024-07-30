//search matrix
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int s=0,e=matrix[0].size()-1;
        while(s<matrix.size() && e>=0){
            if(matrix[s][e]==target){
                return true;
            }
            else if(matrix[s][e]>target){
                e--;
            }
            else{
                s++;
            }
        }
    return false;
        
    }
};