#include "binary_trees.h"

/**
 * binary_tree_depth - Measures the depth of a node
 *
 * @tree: Pointer to the node to measure the depth
 *
 * Return: Depth of the node or 0 if tree is NULL
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t node_depth = 0;

	if (tree == NULL)
		return (0);

	while (tree->parent)
	{
		node_depth++;
		tree = tree->parent;
	}

	return (node_depth);
}

