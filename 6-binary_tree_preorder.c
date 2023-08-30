#include "binary_trees.h"

/**
 * binary_tree_preorder - that will go through the
 *			binary tree using pre order traversal
 * @tree: the pointer to a root node of a tree to traverse
 * @func: the pointer to the function to call for each node
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
