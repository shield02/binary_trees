#include "binary_trees.h"

/**
 * binary_tree_is_root - check if a given node is root node
 * @node: pointer to a node
 *
 * Description: This function checks if a given node is a root node
 * Return: 0 or 1
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (NULL);
	if (node->parent == NULL)
		return (1);
	return (0);
}

