#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        vector<string> board(3);
        for (int i = 0; i < 3; ++i) cin >> board[i];
        char winner = 'D';
        for (int i = 0; i < 3; ++i) {
            if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != '.') winner = board[i][0];
            if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != '.') winner = board[0][i];
        }
        // Check diagonals
        if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != '.') winner = board[0][0];
        if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != '.') winner = board[0][2];
        if (winner == 'X' || winner == 'O' || winner == '+') cout << winner << "\n";
        else cout << "DRAW\n";
    }
    return 0;
}
