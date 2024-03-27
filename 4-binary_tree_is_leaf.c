#include "binary_trees.h"
/**
  *  binary_tree_is_leaf - This the function. M_I_N_E
  * @node: This is ptr to tree
  * Return: This returns an integer
  */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);
	if (!node->left && !node->right)
		return (1);
	return (0);
}
