#include "binary_trees.h"

/**
 * binary_tree_leaves - count the leaves in a tree
 * @tree: pointer to a tree
 *
 * Description: This function counts the leaves of a binary tree
 * Return: number of leaves or 0
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t left, right, count;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right)
		return (1);

	left = binary_tree_leaves(tree->left);
	right = binary_tree_leaves(tree->right);
	count = left + right;

	return (count);
}

