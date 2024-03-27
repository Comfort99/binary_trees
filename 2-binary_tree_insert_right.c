#include "binary_trees.h"
/**
 * binary_tree_insert_right - A function that adds a node
 * at the right side of the tree
 * @parent: a pointer to the root of the tree
 * @value: data to be assigned
 * Return: new created node
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (!parent)
	{
		return (NULL);
	}
	node = binary_tree_node(parent, value);
	if (!node)
	{
		return (NULL);
	}
	if (parent->right)
	{
		node->right = parent->right;
		parent->right->parent = node;
	}
	parent->right = node;

	return (NULL);
}
