#include "binary_trees.h"
/**
 * binary_tree_is_full - checks if a binary tree is full.
 * @tree: a pointer to the root node of the tree to check.
 * Return: 0 if tree is NULL.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
if (!tree) /*if there is no tree*/
{
return (0);
}
if (!tree->left && !tree->right) /*leaf check (no children)*/
{
return (1);
}
if (tree->left && tree->right) /*check for children, not "NULL"*/
{
return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
}
return (0);
}
