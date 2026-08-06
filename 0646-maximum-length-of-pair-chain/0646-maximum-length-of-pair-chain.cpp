class Solution {
public:
     int n ;
    int t [ 1001][1001];


    int lis (vector<vector<int>>& nums, int i , int p){
        if (  i >= n ) 
            return 0;

        if ( p !=-1 &&  t[i][p] != -1){
             return t[i][p];
        }
        int take = 0;
        if ( p == -1  || nums [ p][1] < nums [i][0]){
            take = 1 + lis( nums, i +1 , i );
        }
        int skip =lis( nums,  i +1 , p );
        if (p != -1)
           t[i][p] = max ( take, skip );
           return  max ( take ,skip);

           }
    int findLongestChain(vector<vector<int>>& pairs) {
        memset ( t,-1, sizeof(t));

        n=pairs.size();
        sort(begin(pairs), end(pairs));
        return  lis( pairs, 0 , -1);

    }
};