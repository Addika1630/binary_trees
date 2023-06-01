#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node as a left-child of another node
 *
 * @parent: Pointer to the node where we insert a left-child node
 * @value: Value to store in the new node
 *
 * Return: Pointer to the created node or NULL:
 *	if it fails or parent is NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	if (parent == NULL)
		return (NULL);

	binary_tree_t *new_node;

	new_node = binary_tree_node(parent, value);
	if (new_node == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		parent->left->parent = new_node;
		new_node->left = parent->left;
	}
	parent->left = new_node;

	return (new_node);
}

