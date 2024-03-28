#include "binary_trees.h"
/**
  * binary_tree_nodes - This counts number of non-leaf nodes in tree
  *						using in-order traversal.
  * @tree: This the node pointer.
  * Return: This returns the count of non-leaf nodes.
  */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
		if (!tree || (!tree->left && !tree->right))
			return (0);
		return (binary_tree_nodes(tree->left) + 1 + binary_tree_nodes(tree->right));
}
