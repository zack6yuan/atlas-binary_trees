#include "binary_trees.h"
/**
 * binary_tree_preorder - goes through a binary tree using pre-order traversal.
 * @tree: a pointer to the root node of the tree to traverse
 * @func: a pointer to a gfunction to call for each node.
 * The value in the node must be passed as a paramter to this function.
 * Return: void
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
if (!tree || !func) /*check if NULL*/
{
return; /*return nothing*/
}

func(tree->n);

if (tree->left) /*access element*/
{
binary_tree_preorder(tree->left, func); /*traverse left*/
}
if (tree->right) /*access element*/
{
binary_tree_preorder(tree->right, func); /*traverse right*/
}
}
