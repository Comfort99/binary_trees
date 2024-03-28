#include "binary_trees.h"
/**
  * binary_tree_height - Checks for the height of a node in a BT.
  * @tree: This is node pointer
  * Return: This returns height of node in BT.
  * BT -- Binary tree
  */
size_t binary_tree_height(const binary_tree_t *tree)
{
		size_t result;

			if (!tree || (!tree->left && !tree->right))
				return (0);
		size_t left = binary_tree_height(tree->left);
		size_t right = binary_tree_height(tree->right);
			if (left > right)
			result = left + 1;
			else
				result = right + 1;
		return (result);
}
