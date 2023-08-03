#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a tree
 * @tree: pointer to a node
 *
 * Description: The function measures the depth of a tree
 * Return: depth of tree (int) or 0
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth;

	if (tree == NULL)
		return (0);
	if (tree->parent)
		depth = 1 + binary_tree_depth(tree->parent);
	else
		depth = 0;

	return (depth);
}

