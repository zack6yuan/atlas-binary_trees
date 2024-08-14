#include "binary_trees.h"
/**
 * binary_tree_sibling - finds the sibling of a node
 * @node: a pointer to the root node of the tree to check.
 * Return: a pointer to the sibling node
 * NULL if node is NULL or has no sibling, or if parent is NULL.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
if (!node || !node->parent)
{
return (NULL);
}
if (node->parent->left = node)
{ /*if left child, return right child*/
return (node->parent->right);
}
if (node->parent->right = node)
{ /*if right child, return left child*/
return (node->parent->left);
}
return (NULL); /*node has no sibling*/
}
