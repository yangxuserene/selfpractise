//A robot is located at the top-left corner of a m x n grid (marked 'Start' in the diagram below).
//
//The robot can only move either down or right at any point in time. The robot is trying to reach the bottom-right corner of the grid (marked 'Finish' in the diagram below).
//
//How many possible unique paths are there?

int uniquePaths(int m, int n) {
    if(m==0 || n==0) return 0;
    if(m==1|| n==1) return 1;
    vector<vector<int>> path(101, vector<int>(101,0));
    
    for(int i=1; i<101; i++)
        path[i][0] = 1;
    
    for(int j=1; j<101; j++)
        path[0][j] = 1;
    
    for(int i=1; i<101; i++)
        for(int j=1; j<101; j++){
            path[i][j] =  path[i-1][j] + path[i][j-1];
        }
    return path[m-1][n-1] ;
}


int uniquePaths2(int m, int n ) {
    int N = n+m-2;
    int k = n-1;
    double res = 0;
    for(int i = 1; i <= k; i++)
        res = res * (N-k+i)/i;

    return (int)res;

}
