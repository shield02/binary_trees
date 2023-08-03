#include "binary_trees.h"

/**
 * binary_tree_inorder - use inorder travesal to go through tree
 * @tree: pointer to a root node
 * @func: pointer to a function
 *
 * Description: The function goes through a binary tree
 * using in-order travesal
 * Return: nothing
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}

