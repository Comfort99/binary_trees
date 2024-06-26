#include "binary_trees.h"
/**
 * binary_tree_delete - A function that deletes the entire tree
 * @tree: pointer to the root of the tree
*/
void binary_tree_delete(binary_tree_t *tree)
{
	if (!tree)
	{
		return;
	}

	binary_tree_delete(tree->right);
	binary_tree_delete(tree->left);
	free(tree);
}
