#include "binary_trees.h"
/**
 * binary_tree_node - A function that creates a new node
 * @parent: A pointer to root node
 * @value: parameter of the data to be added
 * Return: new created node
*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
<<<<<<< HEAD
	binary_tree_t* node; 
	node = (binary_tree_t*)malloc(sizeof(binary_tree_t));
	if (!node)
	{
		return(NULL);
	}
=======
	binary_tree_t *node;

	node = malloc(sizeof(binary_tree_t));

	if (!node)
	{
		return (NULL);
	}

>>>>>>> 6e7eda41821efb4efd1a422897f402a2f4ccfae5
	node->n = value;
	node->parent = parent;
	node->right = NULL;
	node->left = NULL;
<<<<<<< HEAD
=======

>>>>>>> 6e7eda41821efb4efd1a422897f402a2f4ccfae5
	return (node);
}
