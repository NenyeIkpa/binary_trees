#include "binary_trees.h"

/**
 * binary_tree_delete - deletes a binary tree structure
 * @tree: pointer to the root node of tree to be deleted
 */

void binary_tree_delete(binary_tree_t *tree)
{
	binary_tree_t *temp = NULL;

	if (tree == NULL)
		return;
	binary_tree_delete(tree->right);
	binary_tree_delete(tree->left);
	free(tree);
	free(temp);
}
