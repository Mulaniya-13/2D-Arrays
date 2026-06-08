#include<iostream>
using namespace std;


//O(n^2) time complexity
// int diagonalMatrix(int mat[][4],int n){
//     int sum=0;
//     for(int i=0;i<n;i++){ //rows
//         for(int j=0;j<n;j++){ //cols
//             if(i==j){
//                 sum+=mat[i][j];
//             }else if(j==n-i-1){
//                 sum+=mat[i][j];
//             }
//         }
//     }
//     return sum;
// }

//O(n) time complexity
int diagonalMatrix(int mat[][4],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=mat[i][i]; //primary diagonal
        if(i!=n-i-1){ //to avoid double counting of middle element in case of odd n
            sum+=mat[i][n-i-1]; //secondary diagonal
        }
    }
    return sum;
}

int main(){
    int matrix[4][4]={ {1,2,3,4},
                       {5,6,7,8},
                       {9,10,11,12},
                       {13,14,15,16} };
    
    cout<<"Diagonal Sum: "<<diagonalMatrix(matrix,4)<<endl;
    return 0;                  
}