#include "binary_trees.h"

/**
 * binary_tree_size - function measures size of binary tree
 * @tree: pointer to the root node of the tree
 * Return: 0 if tree is null
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0;

	if (tree)
	{
		size = size + 1;
		size = size + binary_tree_size(tree->left);
		size = size + binary_tree_size(tree->right);
	}
	return (size);
}
