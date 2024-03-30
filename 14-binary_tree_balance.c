#include "binary_trees.h"
/**
  * binary_tree_balance - Checks for the height
  * of a node in a Binary Tree.
  * @tree: This is node pointer
  * Return: This returns height of node in BT.
  */
int binary_tree_balance(const binary_tree_t *tree)
{
		int balance_factor, left, right;

		if (!tree)
			return (0);
		left = binary_height2(tree->left);
		right = binary_height2(tree->right);
		balance_factor = left - right;
		return (balance_factor);
}


/**
  * binary_height2 - Checks for the height
  * of a node in a Binary Tree.
  * @tree: This is node pointer
  * Return: This returns height of node in BT.
  * BT -- Binary tree
  */
int binary_height2(const binary_tree_t *tree)
{
			size_t result, left, right;

			if (!tree)
				return (0);
			left = binary_height2(tree->left);
			right = binary_height2(tree->right);
			if (left > right)
				result = left + 1;
			else
				result = right + 1;
			return (result);
}
