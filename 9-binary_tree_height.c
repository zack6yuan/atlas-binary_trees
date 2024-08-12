#include "binary_trees.h"
/**
 * binary_tree_height - measure the height of a binary tree.
 * @tree: a pointer to the root node of the tree to measure the height.
 * Return: 0 if tree is NULL.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
size_t left_subtree, right_subtree; /*stores heights*/

if (!tree) /*if tree is empty*/
{
return (0);
}

if (!tree->left && !tree->right) /*no children, leaf?*/
{
return (0);
}

left_subtree = binary_tree_height(tree->left) + 1; /*left height*/
right_subtree = binary_tree_height(tree->right) + 1; /*right height*/

if (left_subtree > right_subtree) /*compares*/
{
return (left_subtree); /*if left taller, return left*/
}
return (right_subtree); /*if right taller, return right*/
}
