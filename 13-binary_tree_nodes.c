#include "binary_trees.h"

/**
 * binary_tree_nodes - function counts nodes with
 * at least 1 child in a binary tree
 * @tree:  is a pointer to the root node of the tree
 * Return: 0 if tree is Null or Null if pointer is not a node
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t node_count;

	node_count = 0;
	if (tree)
	{
		node_count = node_count + (tree->right || tree->left) ? 1 : 0;
		node_count = node_count + binary_tree_nodes(tree->left);
		node_count = node_count + binary_tree_nodes(tree->right);
	}
	return (node_count);
}
