// CCC '19 S1

#include <bits/stdc++.h>

using namespace std;

int main() {
  string instructions; cin >> instructions;
  vector<int> board{ 1, 2, 3, 4 };
  for (int i = 0; i < instructions.size(); i++) {
    vector<int> newBoard = board;
    if (instructions[i] == 'V') {
      newBoard[0] = board[1];
      newBoard[1] = board[0];
      newBoard[2] = board[3];
      newBoard[3] = board[2];
    } else if (instructions[i] == 'H') {
      newBoard[0] = board[2];
      newBoard[1] = board[3];
      newBoard[2] = board[0];
      newBoard[3] = board[1];
    }
    board = newBoard;
  }
  cout << board[0] << " " << board[1] << "\n" << board[2] << " " << board[3];
}