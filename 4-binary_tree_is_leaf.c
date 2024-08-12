#include "binary_trees.h"
/**
 * binary_tree_is_leaf - checks if a node is a leaf.
 * @node: a pointer to the node to check.
 * Return: 1 if node is a leaf, otherwise 0.
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
if (!node) /*if there is no node*/
{
return (0);
}
if (!node->left && !node->right) /*if no children*/
{
return (1); /*leaf*/
}
return (0);
}
