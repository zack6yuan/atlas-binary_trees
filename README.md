# binary_trees

In computer science, a binary tree is a tree data structure in which each node has at most two children, referred to as the left child and the right child. That is, it is a k-ary tree with k = 2. A recursive definition using set theory is that a binary tree is a tuple (L, S, R), where L and R are binary trees or the empty set and S is a singleton set containing the root.

## Tasks

## 0. New node

Write a function that creates a binary tree node

Prototype: binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);

## 1. Insert left

Write a function that inserts a node as the left-child of another node

Prototype: binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);

## 2. Insert right

Write a function that inserts a node as the right-child of another node

Prototype: binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);\

## 3. Delete

Write a function that deletes an entire binary tree

Prototype: void binary_tree_delete(binary_tree_t *tree);

## 4. Is leaf

Write a function that checks if a node is a leaf

Prototype: int binary_tree_is_leaf(const binary_tree_t *node);

## 5. Is root

Write a function that checks if a given node is a root

Prototype: int binary_tree_is_root(const binary_tree_t *node);

## 6. Pre-order traversal

Write a function that goes through a binary tree using pre-order traversal

Prototype: void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int));

## 7. In-order traversal

Write a function that goes through a binary tree using in-order traversal

Prototype: void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int));

## 8. Post-order traversal

Write a function that goes through a binary tree using post-order traversal

Prototype: void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int));

## 9. Height

Write a function that measures the height of a binary tree

Prototype: size_t binary_tree_height(const binary_tree_t *tree);

## 10. Depth

Write a function that measures the depth of a node in a binary tree

Prototype: size_t binary_tree_depth(const binary_tree_t *tree);

## 11. Size

Write a function that measures the size of a binary tree

Prototype: size_t binary_tree_size(const binary_tree_t *tree);

## 12. Leaves

Write a function that counts the leaves in a binary tree

Prototype: size_t binary_tree_leaves(const binary_tree_t *tree);

## 13. Nodes

Write a function that counts the nodes with at least 1 child in a binary tree

Prototype: size_t binary_tree_nodes(const binary_tree_t *tree);

## 14. Balance factor

Write a function that measures the balance factor of a binary tree

Prototype: int binary_tree_balance(const binary_tree_t *tree);

## 15. Is full

Write a function that checks if a binary tree is full

Prototype: int binary_tree_is_full(const binary_tree_t *tree);

## 16. Is perfect

Write a function that checks if a binary tree is perfect

Prototype: int binary_tree_is_perfect(const binary_tree_t *tree);

## 17. Sibling

Write a function that finds the sibling of a node

Prototype: binary_tree_t *binary_tree_sibling(binary_tree_t *node);

## 18. Uncle

Write a function that finds the uncle of a node

Prototype: binary_tree_t *binary_tree_uncle(binary_tree_t *node);