#include "binary_trees.h"

/**
 * binary_tree_is_leaf - check if a node is a leaf
 * @node: pointer to a node
 *
 * Description: This function checks if a node is a leaf
 * Return: 0 or 1
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->left == NULL && node->right == NULL)
		return (1);
}

