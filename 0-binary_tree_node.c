#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_node - creates a binary tree node.
 * @parent: a pointer to the parent node of the node to create.
 * @value: the value to put in the new node.
 * Return: a pointer to the new node, or NULL on failure.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
binary_tree_t *tree_node;

tree_node = malloc(sizeof(binary_tree_t)); /*malloc for node*/

if (!tree_node) /*check if malloc failed*/
{
return (NULL);
 }
tree_node->n = value; /*give node value*/
tree_node->parent = parent; /*assign parent of node*/
tree_node->left = NULL; /*left child NULL*/
tree_node->right = NULL; /*right child NULL*/

return (tree_node); /*return new node pointer*/
}
