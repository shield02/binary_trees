#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: pointer to the root node of the tree
 *
 * Description: This function checks if a binnary tree is full
 * Return: 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int left, right;

	if (tree == NULL)
		return (0);
	if (tree->right == NULL && tree->left == NULL)
		return (1);
	if (tree->right && tree->left)
	{
		left = binary_tree_is_full(tree->left);
		right = binary_tree_is_full(tree->right);

		return (left && right);
	}

	return (0);
}

