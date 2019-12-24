//
//
//  CTCI questions
//  1.7 Rotate Matrix
//
//

#include <iostream>
#include <string>

template <unsigned s>
void rotateMatrix(int grid[][s], int N){
     // Consider all squares one by one 
    for (int x = 0; x < N / 2; x++) 
    { 
        for (int y = x; y < N-x-1; y++) 
        { 
            // store current square in temp 
            int temp = grid[x][y]; 
  
            // move values from right to top 
            grid[x][y] = grid[y][N-1-x]; 
  
            // move values from bottom to right 
            grid[y][N-1-x] = grid[N-1-x][N-1-y]; 
  
            // move values from left to bottom 
            grid[N-1-x][N-1-y] = grid[N-1-y][x]; 
  
            // assign temp to left 
            grid[N-1-y][x] = temp; 
        } 
    } 
}

template <unsigned s>
//function to print out the matrix
void displayMatrix(int grid[][s], int N) 
{ 
    for (int i = 0; i < N; i++) 
    { 
        for (int j = 0; j < N; j++){
            std::cout << grid[i][j] << " ";
        }
        std::cout << std::endl;
    } 
} 

int main(){
    int mat1[4][4] = 
    { 
        {1, 2, 3, 4}, 
        {5, 6, 7, 8}, 
        {9, 10, 11, 12}, 
        {13, 14, 15, 16} 
    }; 

    rotateMatrix(mat1, 4); 
    displayMatrix(mat1, 4); 
    std::cout << std::endl;
    int mat2[3][3] = 
    { 
        {1, 2, 3}, 
        {5, 6, 7}, 
        {9, 10, 11}
    }; 
    rotateMatrix(mat2, 3); 
    displayMatrix(mat2, 3);
}