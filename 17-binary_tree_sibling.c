#include "binary_trees.h"
/**
  * binary_tree_sibling - Function to find sibling of a node
  * @node: This is the node pointer
  * Return: Returns a pointer to a BT_node
  */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
		if (!node || !node->parent)
			return (NULL);
		if (!node->parent->left)
			return (NULL);
		else if (node->parent->left == node)
			return ((!node->parent->right) ? NULL : node->parent->right);
		else
			return ((!node->parent->left) ? NULL : node->parent->left);
}
