#include<iostream>
using namespace std;
// bool nQueen(int board[][],int row){
//  if(row==N) return true;
//  for(int col=0;col<N;col++){
// if(isSafe(board,row_col))
// {
//     board[row][col]=1;
//     if(nQueen(board, row+1))
//     return true;
//     board[row][col]=0;

// }
//  }
//  return false;
//  }
int main(){
    int n=4;
    int board[n][n]={0};
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=n;j++)
        {
        cout<<board[i][j];
        }
        cout<<endl;
    }

return 0;
}