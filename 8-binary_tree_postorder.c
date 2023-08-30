#include "binary_trees.h"

/**
 * binary_tree_postorder - that will go through the
 *			binary tree using post-order traversal
 * @tree: the pointer to a root node of a tree to traverse
 * @func: the pointer to the function to call for each node
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
