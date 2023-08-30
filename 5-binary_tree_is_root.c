#include "binary_trees.h"

/**
 * binary_tree_is_root - that check if the node is the root of the binary tree
 * @node: the pointer to a node to check
 *
 * Return: return 1 - if a node is the root
 *         return 0 - if not.
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node || node->parent)
		return (0);

	return (1);
}
