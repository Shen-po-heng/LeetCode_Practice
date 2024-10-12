# 1275. Find Winner on a Tic Tac Toe Game
Question description: https://leetcode.com/problems/find-winner-on-a-tic-tac-toe-game/description/?envType=study-plan-v2&envId=programming-skills

My 1st try (12.10.2024) was okay.

# Intuition
The problem asks to simulate a game of Tic-Tac-Toe based on the sequence of moves and determine the game's outcome. Since the game involves a fixed 3x3 board and clear win conditions (rows, columns, diagonals), my first thought was to check for these winning conditions after each move. We need to track the player turns and the current state of the board to evaluate if there's a winner, if the game is a draw, or if it is still ongoing.

# Approach
1. Initialize a 3x3 board: Represent the grid using a 2D array of characters. Empty cells are initialized with a space (' ').
2. Simulate the moves: Iterate through the given list of moves, alternating between players A (placing 'X') and B (placing 'O').
3. Check for win conditions: After each move, check if there are three 'X's or 'O's in any row, column, or diagonal. If so, return the corresponding winner.
4. Handle the end of the game: If no winner is found but all moves have been played, return "Draw". If the board still has empty spaces, return "Pending".

# Complexity
- Time complexity:
The time complexity is 
𝑂(𝑛), where 𝑛 is the number of moves. Each move is processed in constant time, and we check a constant number of rows, columns, and diagonals (3 rows, 3 columns, and 2 diagonals), resulting in linear time in terms of the number of moves.

- Space complexity:
The space complexity is 𝑂(1). The board size is fixed (3x3 grid), and we do not use any additional space that scales with the input size.
