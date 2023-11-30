#include "binary_trees.h"

size_t get_binary_tree_height(const binary_tree_t *tree);

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree
 * Return: size_t
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	left_height = get_binary_tree_height(tree->left);
	right_height = get_binary_tree_height(tree->right);
	return ((int)left_height - right_height);
}

/**
 * get_binary_tree_height - measures the height of a binary tree
 * @tree: pointer to root of tree to be measured
 * Return: size_t
 */

size_t get_binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);
	left_height = get_binary_tree_height(tree->left);
	right_height = get_binary_tree_height(tree->right);

	return ((left_height > right_height) ? left_height + 1 : right_height + 1);
}
