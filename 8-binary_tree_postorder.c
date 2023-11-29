#include "binary_trees.h"

/**
 * binary_tree_postorder - prinst tree by post-order traversal
 * @tree: pointer to root node of tree to be traversed
 * @func: pointer to call for each node to print its value
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
