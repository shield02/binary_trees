#include "binary_trees.h"

/**
 * binary_tree_preorder - use preorder travesal to go through tree
 * @tree: pointer to a root node
 * @func: pointer to a function
 *
 * Description: The function goes through a binary tree 
 * using pre-order travesal
 * Return: nothing
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}

