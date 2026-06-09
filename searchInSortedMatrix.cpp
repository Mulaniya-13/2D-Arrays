#include<iostream>
using namespace std;


//Brute Force approach O(n*m)->T.C
// void search(int mat[][4],int n,int m,int key){
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             if(mat[i][j]==key){
//                 cout<<"Element found at ("<<i<<","<<j<<")";
//                 return;
//             }
//         }
//     }
//     cout<<-1;
// }


//Binary Search method O(n*logm)-> T.C for row-wise && O(m*logn)-> T.C for column-wise..
// void search(int mat[][4],int n,int m,int key){
//     for(int i=0;i<n;i++){
//         int st=0, end=m-1;
//         while(st<=end){
//             int mid=st+(end-st)/2;
//             if(mat[i][mid]==key){
//                 cout<<i<<","<<mid;
//                 return;
//             }else if(mat[i][mid]<key){
//                 st=mid+1;
//             }else{
//                 end=mid-1;
//             }
//         }
//     }
//     cout<<-1;
// } 

//Staircase Search O(n+m)->T.C 
bool search(int mat[][4],int n,int m,int key){
    int i=n-1,j=0;
    while(i>=0 && j<m){
        if(mat[i][j]==key){
            cout<<"Key found at ("<<i<<","<<j<<")"<<endl;
            return true;
        }else if(mat[i][j]<key){//right
            //col++
            j++;
        }else{ //up
            //row--
            i--;
        }
    }
    cout<<"Key not found in the matrix"<<endl;
    return false;
}

int main(){
    int matrix[4][4]={ {10,20,30,40},
                       {15,25,35,45},
                       {27,29,37,48},
                       {32,33,39,50} 
                    };
    
    search(matrix,4,4,35);                   
    return 0;                   
}