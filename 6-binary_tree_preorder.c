#include "binary_trees.h"

/**
 * binary_tree_preorder - prints tree by pre-order traversal
 * @tree: pointer to root node of tree to be traversed
 * @func: pointer to call for each node to print its value
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}

/**
 * print_node_value - prints the value stored in a given node
 * @value: value to be printed
 */

void print_node_value(int value)
{
	print_node_value("%d\n", value);
}
