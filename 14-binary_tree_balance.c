#include "binary_trees.h"
/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: a pointer to the root node of the tree to measure the balance factor
 * Return: 0 if tree is NULL.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
int right_tree = 0
int left_tree = 0;

if (!tree)
{
return (0);
}
if (tree->right)
{
right_tree = binary_tree_height(tree->right) + 1;
}
if (tree->left)
{
left_tree = binary_tree_height(tree->left) + 1;
}
return (left_tree- right_tree)
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
left_tree = binary_tree_height(tree->left) + 1; /*left height*/
right_tree = binary_tree_height(tree->right) + 1; /*right height*/

return (left_tree - right_tree);
}
