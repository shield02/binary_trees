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

/**
 * binary_tree_is_perfect - checks if a tree is perfect
 * @tree: pointer to the root node of the tree
 *
 * Description: This function checks if a binary tree is perfect
 * Return: 1 or 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left_height, right_height, left, right;

	if (tree == NULL)
		return (0);
	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);
	if (left_height != right_height)
		return (0);
	if ((tree->left == NULL && tree->right) ||
			(tree->right == NULL && tree->left))
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	left = binary_tree_is_perfect(tree->left);
	right = binary_tree_is_perfect(tree->right);
	if (left == 1 && right == 1)
		return (1);
	return (0);
}

