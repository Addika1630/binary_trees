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
	size_t left_size, right_size;

	if (tree == NULL)
		return (0);

	left_size = binary_tree_size(tree->left);
	right_size = binary_tree_size(tree->right);

	return (1 + left_size + right_size);
}

