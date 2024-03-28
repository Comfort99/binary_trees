#include "binary_trees.h"
/**
  * binary_tree_depth - Calculates the depth of a node
  * @tree: Node pointer
  * Return: It returns the depth of node in binary tree
  */
size_t binary_tree_depth(const binary_tree_t *tree)
{
		size_t depth = 0;

			if (!tree)
				return (depth);

			while (tree->parent)
			{
				depth += 1;
				tree = tree->parent;
			}
		return (depth);
}
