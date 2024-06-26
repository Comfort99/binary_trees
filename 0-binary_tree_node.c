#include "binary_trees.h"
/**
 * binary_tree_node - A function that creates a new node
 * @parent: A pointer to root node
 * @value: parameter of the data to be added
 * Return: new created node
*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	node = (binary_tree_t *)malloc(sizeof(binary_tree_t));
	if (!node)
	{
		return (NULL);
	}
	node->n = value;
	node->parent = parent;
	node->right = NULL;
	node->left = NULL;
	return (node);
}
