#include "binary_trees.h"
/**
  * binary_tree_height - Checks for the height of a node in a BT.
  * @tree: This is node pointer
  * Return: This returns height of node in BT.
  * BT -- Binary tree
  */
int binary_tree_balance(const binary_tree_t *tree)
{
        size_t left, right;

			if (!tree || (!tree->left && !tree->right))    
				return (0);
        left = binary_tree_balance(tree->left);
        right = binary_tree_balance(tree->right);
        if (left > right)
            left = left + 1;
            else
               	right = right + 1;
        return (left - right);
}
