#include "binary_trees.h"
/**
 * binary_tree_uncle - finds the uncle of a node.
 * @node: a pointer to the node to find the uncle.
 * Return: a pointer to the uncle node
 * NULL if node is NULL or node has no uncle.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
       if (!node || !node>parent || !node->parent->parent)
       {
            return (NULL);
       }
}