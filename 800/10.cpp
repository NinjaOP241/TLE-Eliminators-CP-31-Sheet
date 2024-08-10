#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--) {
        vector<vector<char>> board(10, vector<char>(10));

        int score = 0;
        for(int i = 0; i < 10; i++) {
            for(int j = 0; j < 10; j++) {
                cin>>board[i][j];

                if(board[i][j] == 'X' && (i == 0 || i == 9 || j == 0 || j == 9))
                    score += 1;
                else if(board[i][j] == 'X' && (i == 1 || i == 8 || j == 1 || j == 8)) 
                    score += 2;
                else if(board[i][j] == 'X' && (i == 2 || i == 7 || j == 2 || j == 7))
                    score += 3;
                else if(board[i][j] == 'X' && (i == 3 || i == 6 || j == 3 || j == 6))
                    score += 4;
                else if(board[i][j] == 'X' && (i == 4 || i == 5 || j == 4 || j == 5))
                    score += 5;
                    
            }
        }
        cout<<score<<'\n';
    }
    return 0;
}