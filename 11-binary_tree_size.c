#include "binary_trees.h"
/**
 * binary_tree_size - measure the depth of a node in a binary tree.
 * @tree: a pointer to the root node of the tree to measure the size.
 * Return: 0 if tree is NULL.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
        size_t left;
        size_t right;

        if (!tree) /*if there is no tree*/
        {
            return (0);
        }

        left = binary_tree_size(tree->left); /*for left children*/
        right = binary_tree_size(tree->right); /*for right children*/

        return (left + right + 1); /*size + 1 for current node*/
}
