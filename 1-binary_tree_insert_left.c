#include "binary_trees.h"

/**
 * binary_tree_insert_left - insert a left node
 * @parent: pointer of the node to insert
 * @value: the value to store in the new node
 * Return: pointer to the new node or NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *i;

	if (parent == NULL)
		return (NULL);

	i = malloc(sizeof(binary_tree_t));
	if (i == NULL)
		return (NULL);

	i->n = value;
	i->parent = parent;
	i->right = NULL;

	if (parent->left == NULL)
		i->left = NULL;

	else
	{
		i->left = parent->left;
		parent->left->parent = i;
	}
	parent->left = i;
	return (i);
}
