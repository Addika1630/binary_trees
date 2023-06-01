#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts the nodes with at least 1 child
 *
 * @tree: Pointer to the root node of the tree to count the number of nodes
 *
 * Return: Number of nodes or 0 if tree is NULL
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (binary_tree_size(tree) - binary_tree_leaves(tree));
}


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

