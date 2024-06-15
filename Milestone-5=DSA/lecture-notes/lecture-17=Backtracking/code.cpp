// #include <bits/stdc++.h>

// using namespace std;

// int board[11][11];

// bool isPossible(int n,int row,int col){

// // Same Column
//   for(int i=row-1;i>=0;i--){
//     if(board[i][col] == 1){
//       return false;
//     }
//   }
// //Upper Left Diagonal
//   for(int i=row-1,j=col-1;i>=0 && j>=0 ; i--,j--){
//     if(board[i][j] ==1){
//       return false;
//     }
//   }

//   // Upper Right Diagonal

//   for(int i=row-1,j=col+1;i>=0 && j<n ; i--,j++){
//     if(board[i][j] == 1){
//       return false;
//     }
//   }

//   return true;
// }
// void nQueenHelper(int n,int row){
//   if(row==n){
//     // We have reached some solution.
//     // Print the board matrix
//     // return

//     for(int i=0;i<n;i++){
//       for(int j=0;j<n;j++){
//         cout << board[i][j] << " ";
//       }
//     }
//     cout<<endl;
//     return;

//   }

//   // Place at all possible positions and move to smaller problem
//   for(int j=0;j<n;j++){

//     if(isPossible(n,row,j)){
//       board[row][j] = 1;
//       nQueenHelper(n,row+1);
//       board[row][j] = 0;
//     }
//   }
//   return;

// }
// void placeNQueens(int n){

//   memset(board,0,11*11*sizeof(int));

//   nQueenHelper(n,0);

// }
// int main(){

//   placeNQueens(4);
//   return 0;
// }

#include <bits/stdc++.h>
using namespace std;

void printSolution(int **solution, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << solution[i][j] << " ";
        }
    }
    cout << endl;
}
void mazeHelp(int maze[][20], int n, int **solution, int x, int y)
{

    if (x == n - 1 && y == n - 1)
    {
        solution[x][y] = 1;
        printSolution(solution, n);
        solution[x][y] = 0;
        return;
    }
    if (x >= n || x < 0 || y >= n || y < 0 || maze[x][y] == 0 || solution[x][y] == 1)
    {
        return;
    }
    solution[x][y] = 1;
    mazeHelp(maze, n, solution, x - 1, y);
    mazeHelp(maze, n, solution, x + 1, y);
    mazeHelp(maze, n, solution, x, y - 1);
    mazeHelp(maze, n, solution, x, y + 1);
    solution[x][y] = 0;
}
void ratInAMaze(int maze[][20], int n)
{

    int **solution = new int *[n];
    for (int i = 0; i < n; i++)
    {
        solution[i] = new int[n];
    }
    mazeHelp(maze, n, solution, 0, 0);
}
int main()
{
}