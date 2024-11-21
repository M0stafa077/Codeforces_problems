/**
 * @file Count_Sub_Islands.ts
 * @author Mostafa Asaad (https://github.com/M0stafa077)
 * @brief Problem number 1905 on Leetcode.
 */

function countSubIslands(grid1: number[][], grid2: number[][]): number {
    const rows = grid1.length;
    const cols = grid1[0].length;
    const exploredSet = new Set<string>();
    let count = 0;

    function isSubIsland(r, c) {
        return (
            r < 0 ||
            c < 0 ||
            r === rows ||
            c === cols ||
            exploredSet.has(`${r},${c}`) ||
            grid2[r][c] === 0
        );
    }
    function dfs(r, c) {
        if (isSubIsland(r, c)) {
            return true;
        }
        exploredSet.add(`${r},${c}`);
        let res: boolean | undefined = grid1[r][c] === 1;

        res = dfs(r - 1, c) && res;
        res = dfs(r + 1, c) && res;
        res = dfs(r, c - 1) && res;
        res = dfs(r, c + 1) && res;

        return res;
    }

    for (let i = 0; i < rows; ++i) {
        for (let j = 0; j < cols; ++j) {
            if (grid2[i][j] && !exploredSet.has(`${i},${j}`) && dfs(i, j))
                count += 1;
        }
    }

    return count;
}
