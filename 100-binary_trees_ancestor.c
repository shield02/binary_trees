#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a tree
 * @tree: pointer to a node
 *
 * Description: The function measures the depth of a tree
 * Return: depth of tree (int) or 0
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth;

	if (tree == NULL)
		return (0);
	if (tree->parent)
		depth = 1 + binary_tree_depth(tree->parent);
	else
		depth = 0;

	return (depth);
}

/**
 * binary_trees_ancestor - find the lowest common ancestor of two nodes
 * @first: pointer to the first node
 * @second: pointer to the second node
 *
 * Description: This function finds the lowest common ancestor of two nodes
 * Return: 1 or NULL
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	size_t first_depth, second_depth;

	if (first == NULL || second == NULL)
		return (NULL);
	first_depth = binary_tree_depth(first);
	second_depth = binary_tree_depth(second);

	while (first_depth > second_depth)
	{
		first = first->parent;
		first_depth--;
	}
	while (second_depth > first_depth)
	{
		second = second->parent;
		second_depth--;
	}
	while (first && second)
	{
		if (first == second)
			return ((binary_tree_t *)first);
		first = first->parent;
		second = second->parent;
	}
	return ((binary_tree_t *)first);
}

