#include "binary_trees.h"
/**
 * binary_tree_inorder - goes through a binary tree using in-order traversal.
 * @tree: a pointer to the root node of the tree to traverse
 * @func: a pointer to a gfunction to call for each node.
 * The value in the node must be passed as a paramter to this function.
 * Return: void
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
if (!tree || !func) /*check if NULL*/
{
return;
}

if (tree || func) /*if not NULL*/
{
binary_tree_inorder(tree->left, func);
func(tree->n);
binary_tree_inorder(tree->right, func);
}
}
