#include "binary_trees.h"

/**
 * binary_tree_insert_left - that insert the node as thee left-child of
 *                           of another in the binary tree
 * @parent: the  pointer to a node to insert a left-child in
 * @value: a value to store in a new node
 *
 * Return: give me NULL - if parent is NULL or A error occurs
 *         THE pointer to A new node - IF NOT.
 *
 * Description: THAT If parent already has THE left-child A new node
 *              takes its place and A old left-child is set as
 *              A left-child of A new node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *n_nod;

	if (!parent)
		return (NULL);

	n_nod = malloc(sizeof(binary_tree_t));
	if (!n_nod)
		return (NULL);

	n_nod->parent = parent;
	n_nod->n = value;
	n_nod->left = parent->left;
	n_nod->right = NULL;
	if (parent->left)
		parent->left->parent = n_nod;

	parent->left = n_nod;

	return (n_nod);
}
