#include "binary_trees.h"

/**
 * binary_tree_insert_right - insert a node to the right of the tree
 * @parent: pointer of node
 * @value: value to store
 * Return: new node or NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *i;

	if (parent == NULL)
		return (NULL);

	i = malloc(sizeof(binary_tree_t));

	if (i == NULL)
		return (NULL);

	i->parent = parent;
	i->left = NULL;
	i->n = value;

	if (parent->right == NULL)
		i->right = NULL;

	else
	{
		i->right = parent->right;
		parent->right->parent = i;
	}
	parent->right = i;
	return (i);
}

