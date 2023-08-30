#include "binary_trees.h"

/**
 * binary_tree_node - that create the binary tree node.
 * @parent: the Pointer to a Parent node of a to create.
 * @value: a Value to be put In A new node.
 *
 * Return: THE Pointer to A new node - if success
 *         NULL - IF NOT.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *n_nod;

	n_nod = malloc(sizeof(binary_tree_t));
	if (!n_nod)
		return (NULL);

	n_nod->parent = parent;
	n_nod->n = value;
	n_nod->left = NULL;
	n_nod->right = NULL;

	return (n_nod);
}
