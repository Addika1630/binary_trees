#include "binary_trees.h"

/**
 * binary_tree_leaves - Counts the leaves in the binary tree
 *
 * @tree: Pointer to the root node of the tree to count the number of leaves
 *
 * Return: Number of leaves or 0 if tree is NULL
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t left_leaf, right_leaf;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	left_leaf = binary_tree_leaves(tree->left);
	right_leaf = binary_tree_leaves(tree->right);

	return (left_leaf + right_leaf);
}

