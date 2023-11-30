#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least
 * one child in a binary tree
 * @tree: pointer to the root node of the tree
 * Return: size_t
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t node_count;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (0);
	node_count = binary_tree_nodes(tree->left);
	node_count += binary_tree_nodes(tree->right);
	return (node_count + 1);
}
