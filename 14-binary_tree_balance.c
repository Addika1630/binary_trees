#include "binary_trees.h"

/**
 * binary_tree_balance - Measures the balance factor of a binary tree
 *
 * @tree: Pointer to the root node of the tree to measure the balance factor
 *
 * Return: Balance factor or 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int balance_factor;
	size_t left_height, right_height;

	if (!tree)
		return (0);

	left_height = 1 + binary_tree_height(tree->left);
	right_height = 1 + binary_tree_height(tree->right);
	balance_factor = left_height - right_height;

	return (balance_factor);
}


/**
 * binary_tree_height - Measures the height of a binary tree
 *
 * @tree: Pointer to the root node of the tree to measure the height
 *
 * Return: Height of the binary tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height = 0;
	size_t right_height = 0;

	if (tree == NULL)
		return (0);

	if (tree->left)
		left_height = 1 + binary_tree_height(tree->left);
	if (tree->right)
		right_height = 1 + binary_tree_height(tree->right);

	return (left_height > right_height ? left_height : right_height);
}
