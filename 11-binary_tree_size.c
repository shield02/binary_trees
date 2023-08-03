#include "binary_trees.h"

/**
 * binary_tree_size - measure the size of a tree
 * @tree: pointer to a tree
 *
 * Description: This function measure of size of a tree
 * Return: size of the tree (int) or 0
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left, right, size;

	if (tree == NULL)
		return (0);
	left = binary_tree_size(tree->left);
	right = binary_tree_size(tree->right);
	size = left + right + 1;

	return (size);
}

