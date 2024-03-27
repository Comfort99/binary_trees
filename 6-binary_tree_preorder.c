#include "binary_trees.h"
/**
  * binary_tree_preorder - This is the function
  * @tree: This is the ptr
  * @func: This is the func var
  *
  */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
		if (!tree || !func)
			return;
				(*func)(tree->n);
				binary_tree_preorder(tree->left, func);
				binary_tree_preorder(tree->right, func);
		return;
}
