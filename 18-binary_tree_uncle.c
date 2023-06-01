#include "binary_trees.h"

/**
 * binary_tree_uncle - Finds the uncle of a node
 *
 * @node: Pointer to the node to find the uncle
 *
 * Return: Pointer to the uncle node or NULL: if node is NULL,
 *	if node has no uncle
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *parent = 0, *grandparent = 0;

	if (!node || !node->parent || !node->parent->parent)
		return (NULL);

	parent = node->parent;
	grandparent = parent->parent;

	if (grandparent->left == parent)
		return (grandparent->right);
	if (grandparent->right == parent)
		return (grandparent->left);

	return (NULL);
}

