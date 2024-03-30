#include "binary_trees.h"
/**
  * binary_tree_is_perfect - This checks if 
  * Binary Tree is perfect M_I_N_E{wrapper}
  * @tree: This is the node pointer
  * Return: This returns 1,if perfect, else 0
  */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
		int depth = 0;

		if (!tree)
			return (0);
		while (tree->left)
		{
			depth++;
			tree = tree->left;
		}
		while (tree->parent)
			tree = tree->parent;
		return (bt_is_perfect(tree, depth, 0));
}

/**
  * bt_is_perfect - This the recursive function, to check perefectness
  * @tree: This is the node pointer
  * @d: This is the arbitrary depth of the tree
  * @level: This is current level of node
  * Return: This returns 1, if perfect BT, else 0
  */
int bt_is_perfect(const binary_tree_t *tree, int d, int level)
{
		int left, right;

	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return ((d == level) ? 1 : 0);
	if (!tree->left || !tree->right)
		return (0);
	left = bt_is_perfect(tree->left, d, level + 1);
	right = bt_is_perfect(tree->right, d, level +  1);
	return ((left && right) ? 1 : 0);
}

