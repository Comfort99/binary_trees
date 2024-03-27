#include "binary_trees.h"
/**
  * binary_tree_is_root - This is the func
  * @node: This is the node ptr
  * Return: This returns am int
  */
int binary_tree_is_root(const binary_tree_t *node)
{
		if (!node)
			return (0);
		if (!node->parent)
			return (1);
		return (0);
}
