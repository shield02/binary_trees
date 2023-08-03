#include "binary_trees.h"

/**
 * binary_tree_insert_right - insert a node to the right
 * @parent: pointer to the parent node
 * @value: value to store in the new node
 *
 * Description: This function inserts a new node as the right child
 * Return: pointer to the new node or NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);
	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		new->right = parent->right;
		parent->right->parent = new;
	}
	parent->right = new;
	return (new);
}

