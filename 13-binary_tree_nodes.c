#include "binary_trees.h"

/**
 * binary_tree_nodes - count the node with at least 1 child
 * @tree: pointer to a node
 *
 * Description: This function counts the nodes with at least one child
 * in the binary tree
 * Return: number of node (size_t) or 0
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->right != NULL || tree->left != NULL)
	{
		left = binary_tree_nodes(tree->left) + 1;
		right = binary_tree_nodes(tree->right);
		count += (left + right);

		return (count);
	}
}

