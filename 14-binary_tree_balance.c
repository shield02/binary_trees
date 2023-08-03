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
		left = 1;
	if (tree->right)
		right = 1 + binary_tree_height(tree->right);
	else
		right = 1;
	if (left > right)
		return (left);
	else
		return (right);
}

/**
 * binary_tree_balance - measure the balance factor of a tree
 * @tree: pointer to the root node of the tree
 *
 * Description: This function measures the balance factor of a binary tree
 * Return: balance factor (int) or 0
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int count, left, right;

	if (tree == NULL)
		return (0);
	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);
	count = left - right;

	return (count);
}

