#include "binary_trees.h"
/**
  * binary_tree_leaves - This gives count of leaf nodes
  * @tree: This is node pointer
  * Return: Returns leaf node count from specified node
  */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
			if (!tree)
				return (0);
			else if (!tree->left && !tree->right)
				return (1);
			else
				return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
