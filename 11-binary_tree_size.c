#include "binary_trees.h"
#include <math.h>

/**
 * binary_tree_size - Measures the size of a binary tree
 *
 * @tree: pointer to the root node ofbthe tree to measure the size
 *
 * Return: Size of the binary tree or 0 if tree is NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t tree_height, tree_size;

	if (tree == NULL)
		return (0);

	tree_height = binary_tree_height(tree);
	tree_size = pow(2, tree_height + 1) - 1;

	return (tree_size);
}

