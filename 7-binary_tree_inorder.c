#include "binary_trees.h"

/**
 * binary_tree_inorder - prints tree by inorder traversal
 * @tree: pointer to root node of tree to be traversed
 * @func: pointer to call for each node to print its value
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
