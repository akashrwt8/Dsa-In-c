int countMines(char** b, int maxRowSize, int maxColSize, int x, int y) {
    int count = 0;
    for(int i = x - 1; i <= x + 1; i++) 
        for(int j = y - 1; j <= y + 1; j++) 
            if(i >= 0 && i < maxRowSize && j >= 0 && j < maxColSize && b[i][j] == 'M')
                count++;
        
    return count;
}

void dfs(char** b, int m, int n, int x, int y) {
    // boundary check and cell is not empty square
    if(x < 0 || y < 0 || x >= m || y >= n || b[x][y] != 'E') return;
    
    // all adjacent 8 cell coordinates w.r.t current cell (x,y)
    int dirs[8][2] = {{1,0},{-1,0},{0,1},{0,-1},{1,1},{1,-1},{-1,1},{-1,-1}};
    
    // find the number of adjacent mines for this cell
    int numMines = countMines(b, m, n, x, y);
    if(numMines > 0) {
        b[x][y] = numMines + '0';
    } else {
        // no mines, mark this cell as Blank 'B'
        b[x][y] = 'B';
        // find mines in all 8 adjacent cells
        for(int i = 0; i < 8; i++) {
            dfs(b, m, n, x + dirs[i][0], y + dirs[i][1]);
        }
    }        
}

char** updateBoard(char** board, int boardSize, int* boardColSize, int* click, int clickSize, int* returnSize, int** returnColumnSizes){
    int x = click[0], y = click[1];
    
    // validate the click cell
    if(board[x][y] == 'M') 
        board[x][y] = 'X';
    else 
        dfs(board, boardSize, *boardColSize, x, y);
    
    // set the result board's row and cols sizes
    *returnSize = boardSize;
    *returnColumnSizes = calloc(sizeof(int), boardSize);
    for(int i = 0; i < boardSize; i++) 
        (*returnColumnSizes)[i] = boardColSize[i];
    
    return board;
}