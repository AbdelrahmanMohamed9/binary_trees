#include "binary_trees.h"

int tree_is_perfect_recursive(const binary_tree_t *tree,
		size_t leaf_depth, size_t level);
const binary_tree_t *get_leaf(const binary_tree_t *tree);

/**
 * get_leaf - Function Returns a leaf of a binary tree.
 * @tree: Pointer to the root node of the tree.
 * Return: Pointer to the first encountered leaf.
 */

const binary_tree_t *get_leaf(const binary_tree_t *tree)
{
	if (binary_tree_is_leaf(tree) == 1)
		return (tree);
	return (tree->right ? get_leaf(tree->right) : get_leaf(tree->left));
}

/**
 * binary_tree_depth - functioncmeasures depth of node in binary tree
 * @tree: pointer to the node to measure the depth
 * Return: 0 if the node is Null.
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	return ((tree && tree->parent) ? binary_tree_depth(tree->parent) + 1 : 0);
}

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

/**
 * tree_is_perfect_recursive - Checks ifcbinary tree perfect recursive.
 * @tree: A pointer to the root node of the tree.
 * @leaf_depth: depth of one leaf in binary tree.
 * @level: Level of current node.
 * Return: If the tree is perfect, 1, otherwise 0.
 */

int tree_is_perfect_recursive(const binary_tree_t *tree,
		size_t leaf_depth, size_t level)
{
	if (binary_tree_is_leaf(tree))
		return (level != leaf_depth ? 0 : 1);
	if (tree->left == NULL || tree->right == NULL)
		return (0);
	return (tree_is_perfect_recursive(tree->right, leaf_depth, level + 1) &&
		tree_is_perfect_recursive(tree->left, leaf_depth, level + 1));
}

/**
 * binary_tree_is_perfect - function that checks if a binary tree is perfect
 *
 * @tree: pointer to the root node of the tree.
 *
 * Return: 0 if tree is NULL.
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (tree_is_perfect_recursive(tree, binary_tree_depth(get_leaf(tree)), 0));
}
