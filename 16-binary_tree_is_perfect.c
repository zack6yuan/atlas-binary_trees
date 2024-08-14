#include "binary_trees.h"
/**
 * binary_tree_is_perfect - checks if a binary tree is perfect.
 * @tree: a pointer to the root node of the tree to check.
 * Return: 0 if tree is NULL.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
size_t left_tree;
size_t right_tree;

if (!tree)
{
return (0);
}

left_tree = binary_tree_height(tree->left);
right_tree = binary_tree_height(tree->right);

if (!tree->left && !tree->right)
{
return (1);
}
if (left_tree != right_tree)
{
return (0);
}
int perfect_left = binary_tree_is_perfect(tree->left);
int perfect_right = binary_tree_is_perfect(tree->right);

return (perfect_left && perfect_right);
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
left_tree = binary_tree_height(tree->left);
right_tree = binary_tree_height(tree->right);
/*return max height of L and R subtrees + 1 for current node*/
return (1 + (left_tree > right_tree ? left_tree : right_tree));
}
