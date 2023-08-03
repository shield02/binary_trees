#include "binary_trees.h"

/**
 * binary_tree_postorder - use postorder travesal to go through tree
 * @tree: pointer to a root node
 * @func: pointer to a function
 *
 * Description: The function goes through a binary tree
 * using post-order travesal
 * Return: nothing
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}

