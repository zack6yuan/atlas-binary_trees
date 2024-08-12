#include "binary_trees.h"
/**
 * binary_tree_insert_right - inserts a node as
 * the right-child of another node.
 * @parent: a pointer to the node to insert the right-child in.
 * @value: the value to store in the new node.
 * Return: a pointer to the created node,
 * or NULL on failure or if parent is NULL.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
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
newnode->left = NULL; /*set left child of parent to NULL*/
newnode->right = NULL; /*set child child of parent to NULL*/

if (parent->right) /*if parent already has left child*/
{
newnode->right = parent->right; /*newnode right ptr*/
newnode->right->parent = newnode; /*right child's parent*/
}
parent->right = newnode; /*parent's right ptr pts to new node*/

return (newnode); /*return newnode ptr*/
}