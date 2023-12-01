#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if binary tree is full.
 * @tree: pointer to the root node of the tree.
 *
 * Return: If tree is NULL, return 0.
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	if (tree->right != NULL && tree->left != NULL)
		return (binary_tree_is_full(tree->right) && binary_tree_is_full(tree->left));
	return (0);
}
