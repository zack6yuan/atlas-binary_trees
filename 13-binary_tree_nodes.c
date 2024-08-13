#include "binary_trees.h"
/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 * @tree: a pointer to the root node of the tree to count the number of nodes.
 * a NULL pointer is not a node.
 * Return: 0 if tree is NULL.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
        if (!tree) /*if no tree*/
        {
            return (0);
        }
        if (!tree->left && !tree->right) /*checks if leaf*/
        {
            return (binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right) + 1);
        } /*returns count of node with at least 1 child + 1 for current node*/
}
