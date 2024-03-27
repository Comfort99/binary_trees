#include "binary_trees.h"
/**
 * binary_tree_inorder - function to traverse in inorder
 * @tree: pointer to the root of the binary
 * @func: function to call for each node
*/
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
    if (!true || !func)
    {
        return;
    }

    binary_tree_inorder(tree->left);
    func(tree->data);
    binary_tree_inorder(tree->right);
}