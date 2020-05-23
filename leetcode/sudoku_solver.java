class Solution {
    public void solveSudoku(char[][] board) {
        solve(board, 0, 0);
    }

    Pair next(int r, int c){
        if(c == 8){
            if(r == 8){
                r = 9;
                c = 9;
            } else {
                r++;
                c = 0;
            }
        } else {
            c++;
        }
        return new Pair(r, c);
    }

    boolean check(char[][] board, int r, int c){
        for(int i = 0; i < 9; i++){
            if(c != i && board[r][c] == board[r][i]){
                return false;
            }
        }
        for(int i = 0; i < 9; i++){
            if(r != i && board[r][c] == board[i][c]){
                return false;
            }
        }
        for(int i = r - (r%3); i < r-(r%3)+3; i++){
            for(int j = c-(c%3); j < c-(c%3)+3; j++){
                if(!(i == r && j == c) && board[i][j] == board[r][c]){
                    return false;
                }
            }
        }
        return true;
    }

    boolean solve(char[][] board, int r, int c){
        Pair pr = next(r, c);
        if(r == 9 && c == 9){
            return true;
        }
        boolean isEmpty  = true;
        if(board[r][c] != '.'){
            isEmpty = false;
            return solve(board, (int)pr.getKey(), (int)pr.getValue());
        }
        int i = 1;
        while(i <= 9){
            board[r][c] = (char)((int)'0' + i);
            if(check(board, r, c)){
                if(solve(board, (int)pr.getKey(), (int)pr.getValue())){
                    return true;
                }
            }
            i++;
        }
        if(isEmpty){
            board[r][c] = '.';
        }
        return false;
    }

}