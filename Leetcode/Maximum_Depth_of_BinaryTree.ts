/**
 * @file Maximum_Depth_of_BinaryTree.ts
 * @author Mostafa Asaad (https://github.com/M0stafa077)
 * @brief Problem number 104 on Leetcode. 
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
    if(root === null) return 0;
    const leftSideMaxDepth = maxDepth(root.left);
    const rightSideMaxDepth = maxDepth(root.right);
    return 1 + Math.max(leftSideMaxDepth, rightSideMaxDepth);
};
