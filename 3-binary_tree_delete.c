#include "binary_trees.h"

/**
 * binary_tree_delete - that delete the binary tree
 * @tree: the pointer to a root node of a tree to delete
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (!tree)
		return;

	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);
	free(tree);
}
