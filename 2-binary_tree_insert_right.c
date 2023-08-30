#include "binary_trees.h"

/**
 * binary_tree_insert_right - that Insert the node as a right-child
 *                            of another in the binary tree
 * @parent: the pointer to a node to insert a right-child in
 * @value: a value to store in a new node
 *
 * Return: NULL - that If parent is NULL or A error occurs
 *         THE pointer to A new node - IF NOT
 *
 * Description: THAT if parent already has the right-child  a new node
 *              takes its place and a old right-child is set as
 *              a right-child of a new node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *n_nod;

	if (!parent)
		return (NULL);

	n_nod = malloc(sizeof(binary_tree_t));
	if (!n_nod)
		return (NULL);

	n_nod->parent = parent;
	n_nod->n = value;
	n_nod->left = NULL;
	n_nod->right = parent->right;
	if (parent->right)
		parent->right->parent = n_nod;

	parent->right = n_nod;
	return (n_nod);
}
