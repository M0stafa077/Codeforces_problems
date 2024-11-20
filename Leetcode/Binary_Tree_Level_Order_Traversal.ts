/**
 * @file Binary_Tree_Level_Order_Traversal.ts
 * @author Mostafa Asaad (https://github.com/M0stafa077)
 * @brief Problem number 102 on Leetcode.
 */
/**
 * Definition for a binary tree node.
 * class TreeNode {
 *     val: number
 *     left: TreeNode | null
 *     right: TreeNode | null
 *     constructor(val?: number, left?: TreeNode | null, right?: TreeNode | null) {
 *         this.val = (val===undefined ? 0 : val)
 *         this.left = (left===undefined ? null : left)
 *         this.right = (right===undefined ? null : right)
 *     }
 * }
 */

function maxDepth(root: TreeNode | null): number {
    if (root === null) return 0;
    const leftSideMaxDepth = maxDepth(root.left);
    const rightSideMaxDepth = maxDepth(root.right);
    return 1 + Math.max(leftSideMaxDepth, rightSideMaxDepth);
}

/**
 * Definition for a binary tree node.
 * class TreeNode {
 *     val: number
 *     left: TreeNode | null
 *     right: TreeNode | null
 *     constructor(val?: number, left?: TreeNode | null, right?: TreeNode | null) {
 *         this.val = (val===undefined ? 0 : val)
 *         this.left = (left===undefined ? null : left)
 *         this.right = (right===undefined ? null : right)
 *     }
 * }
 */

function levelOrder(root: TreeNode | null): number[][] {
    if (!root) return [];
    const result = [];
    const fringe = [root];
    while (fringe.length) {
        const levelSize = fringe.length;
        const currentLevel = [];
        for (let i = 0; i < levelSize; ++i) {
            const node = fringe.shift();
            currentLevel.push(node.val);
            if (node.left) fringe.push(node.left);
            if (node.right) fringe.push(node.right);
        }
        result.push(currentLevel);
    }
    return result;
}
