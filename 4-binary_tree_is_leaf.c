#include "binary_trees.h"

/**
 * binary_tree_is_leaf - that check if the node is the leaf of the binary tree
 * @node: the pointer to a node to check
 *
 * Return: return 1 - if a node is the leaf
 *         return 0 - if not
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node || node->left || node->right)
		return (0);

	return (1);
}
