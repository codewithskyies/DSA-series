class Solution {
public:
    string convert(string s, int numRows) {
        int n=s.size();
        int col=n;

        vector<vector<char>>a(numRows,vector<char>(col,'$'));
        int k=0,i=0,j=0;

        while( k<n && i<numRows && j<col){
            a[i][j]=s[k];
            i++;

            k++;
            if (i==numRows){
                i -=2;
                j++;

                while(k< n && i>=1){
                    a[i][j]=s[k];
                    i--;
                    j++;
                    k++;
                    
                }


            }
            if (i<0) i=0;


        }
        string ans="";
        for(auto i : a){
            for (auto j: i){
                if (j!='$')
                ans +=j;

            }
        }

        return ans ;

        
        

    }
};