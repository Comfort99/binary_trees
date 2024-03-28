#include "binary_trees.h"
/**
  * binary_tree_uncle - This finds the uncle of a node (parent sibling)
  * @node: This is the node pointer
  * Return: This returns the pointer to the uncle of the node
  */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !node->parent || !node->parent->parent)
		return (NULL);
	node = node->parent;
	if (!node->parent->left)
		return (NULL);
	else if (node->parent->left == node)
		return ((!node->parent->right) ? NULL : node->parent->right);
	else
		return ((!node->parent->left) ? NULL : node->parent->left);
}
