#include "binary_trees.h"

/**
 * binary_tree_height - measure the height of a tree
 * @tree: pointer to the root of a tree to be measured
 *
 * Description: This function measures the height of a tree
 * Return: size of tree (int) or 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left, right;

	if (tree == NULL)
		return (0);

	if (tree->left)
		left = 1 + binary_tree_height(tree->left);
	else
		left = 0;
	if (tree->right)
		right = 1 + binary_tree_height(tree->right);
	else
		right = 0;
	if (left > right)
		return (left);
	else
		return (right);
}

