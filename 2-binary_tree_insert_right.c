#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts node to the right of
 * a binary tree
 * @parent: pointer to node to insert right child in
 * @value: value to be placed in new left node
 * Return: if parent is NULL, returns NULL else new node
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
		return (NULL);
	new_node = binary_tree_node(parent, value);
	if (parent->right == NULL)
		parent->right = new_node;
	else
	{
		new_node->right = parent->right;
		new_node->right->parent = new_node;
		parent->right = new_node;
	}
	return (new_node);
}
