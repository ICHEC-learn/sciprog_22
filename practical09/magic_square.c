int isMagicSquare(int **square, const int n)
{
    if (n < 0){
        return 0;
    }
    int magic_num = 0;
    int off_diag_sum = 0;
    int i,j;

    // first checking if diagonal and secondary diagonal summation are the same
    for (i = 0; i < n; i++){
        magic_num += square[i][i];
        off_diag_sum += square[i][n-i-1];
    }
    if (off_diag_sum != magic_num)
    {
        printf("%d, %d doesnt satisfy diagnol sums rule\n", magic_num, off_diag_sum);
        return 0;
    }

    // checking if the row and column summation for each row and column are the same as diagonal sum
    for (i = 0; i < n; i++){
        int rowSum = 0;
        int colSum = 0;
        for (j = 0; j < n; j++){
            rowSum += square[i][j];
            colSum += square[j][i];
        }
        
        if (rowSum != magic_num || colSum!= magic_num){
            printf("%d, %d doesnt satisfy row or col sums rule\n", rowSum, colSum);
            return 0;
        }

        }
    return 1;
}