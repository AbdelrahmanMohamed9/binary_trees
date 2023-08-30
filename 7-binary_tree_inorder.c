#include "binary_trees.h"

/**
 * binary_tree_inorder - that will go through the binary
 *		tree using in-order traversal
 * @tree: the pointer to a root node of a tree to traverse
 * @func: the pointer to the function to call for each node
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
