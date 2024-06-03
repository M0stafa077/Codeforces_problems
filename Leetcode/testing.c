/*
 * @file  testing.c
 * @author Mostafa Asaad (https://github.com/M0stafa077)
 * @brief A C code used in unit testing for the problem being solved.
 */

#include "../Unity/src/unity.h"
#include "Valid_Sudoku.c"

void setUp(void) {
    // Set up code (if needed)
}

void tearDown(void) {
    // Tear down code (if needed)
}

void test_1(void) 
{
	char board[9][9] = {
        {'5', '3', '.', '.', '7', '.', '.', '.', '.'},
        {'6', '.', '.', '1', '9', '5', '.', '.', '.'},
        {'.', '9', '8', '.', '.', '.', '.', '6', '.'},
        {'8', '.', '.', '.', '6', '.', '.', '.', '3'},
        {'4', '.', '.', '8', '.', '3', '.', '.', '1'},
        {'7', '.', '.', '.', '2', '.', '.', '.', '6'},
        {'.', '6', '.', '.', '.', '.', '2', '8', '.'},
        {'.', '.', '.', '4', '1', '9', '.', '.', '5'},
        {'.', '.', '.', '.', '8', '.', '.', '7', '9'}
    };

    char* boardPtrs[9];
        for (int i = 0; i < 9; i++) {
            boardPtrs[i] = board[i];
        }

    int x = 9;
    TEST_ASSERT_TRUE(isValidSudoku(boardPtrs, 9, &x));
}

void test_2(void)
{
    char board[9][9] = {{'8', '3', '.', '.', '7', '.', '.', '.', '.'},
                        {'6', '.', '.', '1', '9', '5', '.', '.', '.'},
                        {'.', '9', '8', '.', '.', '.', '.', '6', '.'},
                        {'8', '.', '.', '.', '6', '.', '.', '.', '3'},
                        {'4', '.', '.', '8', '.', '3', '.', '.', '1'},
                        {'7', '.', '.', '.', '2', '.', '.', '.', '6'},
                        {'.', '6', '.', '.', '.', '.', '2', '8', '.'},
                        {'.', '.', '.', '4', '1', '9', '.', '.', '5'},
                        {'.', '.', '.', '.', '8', '.', '.', '7', '9'}};
    char* boardPtrs[9];
        for (int i = 0; i < 9; i++) {
            boardPtrs[i] = board[i];
        }

    int x = 9;
    TEST_ASSERT_FALSE(isValidSudoku(boardPtrs, 9, &x));
}

void test_3(void)
{
    char board[9][9] = {
        {'.', '.', '.', '.', '5', '.', '.', '1', '.'},
        {'.', '4', '.', '3', '.', '.', '.', '.', '.'},
        {'.', '.', '.', '.', '.', '3', '.', '.', '1'},
        {'8', '.', '.', '.', '.', '.', '.', '2', '.'},
        {'.', '.', '2', '.', '7', '.', '.', '.', '.'},
        {'.', '1', '5', '.', '.', '.', '.', '.', '.'},
        {'.', '.', '.', '.', '.', '2', '.', '.', '.'},
        {'.', '2', '.', '9', '.', '.', '.', '.', '.'},
        {'.', '.', '4', '.', '.', '.', '.', '.', '.'}
    };
    char* boardPtrs[9];
        for (int i = 0; i < 9; i++) {
            boardPtrs[i] = board[i];
        }

    int x = 9;
    TEST_ASSERT_FALSE(isValidSudoku(boardPtrs, 9, &x));
}

int main(void) 
{
    UNITY_BEGIN();
    RUN_TEST(test_1);
    RUN_TEST(test_2);
    RUN_TEST(test_3);
    return UNITY_END();
}
