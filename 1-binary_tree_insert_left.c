#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_insert_left - inserts a new node as
 * the left-child of another node.
 * @parent: a pointer to the new node to insert the left-child in.
 * @value: the value to store in the new node
 * Return: a pointer to the created node,
 * or NULL on failure or if parent is NULL.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
binary_tree_t *newnode; /*ptr to newly created node*/

if (!parent) /*check if parent is NULL*/
{
return (NULL);
}

newnode = malloc(sizeof(binary_tree_t)); /*allocate for newnode*/

if (!newnode) /*check if malloc worked*/
{
return (NULL);
}

newnode->n = value; /*set value of newnode*/
newnode->parent = parent; /*set parent of newnode*/
newnode->right = NULL; /*set right child of parent to NULL*/
newnode->left = NULL; /*set left child of parent to NULL*/

if (parent->left) /*if parent already has left child*/
{
newnode->left = parent->left; /*newnode left ptr*/
newnode->left->parent = newnode; /*left child's parent*/
}
parent->left = newnode; /*parent's left ptr pts to new node*/

return (newnode); /*return newnode ptr*/
}
