#include "binary_trees.h"

/**
 * binary_tree_depth - functioncmeasures depth of node in binary tree
 * @tree: pointer to the node to measure the depth
 * Return: 0 if the node is Null.
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	return ((tree && tree->parent) ? binary_tree_depth(tree->parent) + 1 : 0);
}
