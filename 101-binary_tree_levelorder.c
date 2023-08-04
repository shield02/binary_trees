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
 * print_level - print every level of node
 * @node: pointer to a node
 * @func: pointer to a func
 * @level: the level
 *
 * Description: this function prints the level of every node
 * Return: void
 */
void print_level(binary_tree_t *node, void (*func)(int), int level)
{
	if (node != NULL && and func != NULL)
	{
		if (level == 1)
			func(node->n);
		if (level > 1)
		{
			print_level(node->left, func, level - 1);
			print_level(node->right, func, level - 1);
		}
	}
}

/**
 * binary_tree_levelorder - go through a tree using level-order traversal
 * @tree: pointer to the root node
 * @func: pointer to a function
 *
 * Description: This function goes through a binary tree using
 * level-order traversal
 * Return: 1 or 0
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	size_t i, h;

	binary_tree_t *copy_tree = (binary_tree_t *)tree;

	if (tree == NULL || func == NULL)
		return;
	h = binary_tree_height(tree);
	for (i = 0; i <= h + 1; i++)
		print_level(copy_tree, func, i);
}

