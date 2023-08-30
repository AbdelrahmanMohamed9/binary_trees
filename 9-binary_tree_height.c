#include "binary_trees.h"

/**
 * binary_tree_height - that Measure a height of the binary tree
 * @tree: the pointer to a root node of a tree to measure a height
 *
 * Return: return 0 - if tree is NULL
 *         Tree height - if not
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t hhl = 0, hrr = 0;

		hhl = tree->left ? 1 + binary_tree_height(tree->left) : 0;
		hrr = tree->right ? 1 + binary_tree_height(tree->right) : 0;
		return (hhl > hrr ? hhl : hrr);
	}
	return (0);
}
