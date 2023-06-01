#include "binary_trees.h"

/**
 * binary_tree_is_root - Checks ifba given node isba root
 *
 * @node: Pointer to the node to check
 *
 * Return: 1 if root, 0 otherwise and if node is NULL
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->parent == NULL)
		return (1);

	return (0);
}

