#include "binary_trees.h"
/**
 * binary_tree_insert_left - A function that adds a node
 * at the side of the tree
 * @parent: pointer to the root of the tree
 * @value: data to be assigned
 * Return: new created node
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (!parent)
		return (NULL);
	node = binary_tree_node(parent, value);
	if (!node)
		return (NULL);
	if (parent->left)
	{
		node->left = parent->left;
		parent->left->parent = node;
	}
	parent->left = node;
	return (node);
}
