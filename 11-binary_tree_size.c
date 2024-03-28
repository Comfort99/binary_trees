#include "binary_trees.h"
/**
  * binary_tree_size - This gets size of a BT.
  * @tree: This is node pointer
  * Return: This returns the size of BT
  */
size_t binary_tree_size(const binary_tree_t *tree)
{
		if (!tree)
			return (0);
		return (binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1);
}
