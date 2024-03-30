#include "binary_trees.h"
/**
  * binary_tree_is_full - This checks if Binary Tree is full
  * @tree: This is node pointer
  * Return: This returns 1 if full, else 0
  *			if tree == NULL, or Binary Tree not full
  */
int binary_tree_is_full(const binary_tree_t *tree)
{
		int left, right;

		if (!tree)
			return (0);
		if (!tree->left && !tree->right)
			return (1);
		if (tree->left || tree->right)
		{
			left = binary_tree_is_full(tree->left);
			right = binary_tree_is_full(tree->right);
			if (left == right)
				return (1);
		}
			return (0);
}
