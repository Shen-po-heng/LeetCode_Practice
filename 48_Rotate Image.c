void rotate(int** matrix, int matrixSize, int* matrixColSize){
    
    int tmp;
    
    //tanspose
    for (int i = 0; i < matrixSize; i++)             
        for (int j = i; j < matrixSize; j++) {
            tmp = matrix[j][i];
            matrix[j][i] = matrix[i][j];
                matrix[i][j] = tmp;
        }
    
    //right and left exchange
     for (int i = 0; i < matrixSize; i++) 
        for (int j = 0; j < matrixSize / 2; j++) {
            int tmp = matrix[i][j];
            matrix[i][j] = matrix[i][matrixSize - j - 1];
            matrix[i][matrixSize - j - 1] = tmp;
        }
    
    
}
