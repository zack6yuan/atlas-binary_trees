#include "binary_trees.h"
/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: a pointer to the root node of the tree to measure the balance factor
 * Return: 0 if tree is NULL.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
int right_tree = 0; /*height of right subtree*/
int left_tree = 0; /*height of left subtree*/

if (!tree) /*if there is no tree*/
{
return (0);
}
if (tree->right) /*check if right is present*/
{
right_tree = binary_tree_height(tree->right);
}
if (tree->left) /*check if left is present*/
{
left_tree = binary_tree_height(tree->left);
}
return (left_tree - right_tree);
}

/**
 * binary_tree_height - measure the height of a binary tree.
 * @tree: a pointer to the root node of the tree to measure the height.
 * Return: 0 if tree is NULL.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
size_t left_tree;
size_t right_tree;

if (!tree) /*if tree is empty*/
{
return (0);
}
left_tree = binary_tree_height(tree->left); /*left height*/
right_tree = binary_tree_height(tree->right); /*right height*/
/*return max height of L and R subtrees + 1 for current node*/
return (1 + (left_tree > right_tree ? left_tree : right_tree));
}
