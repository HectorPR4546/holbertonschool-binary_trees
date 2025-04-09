#include "binary_trees.h"

/**
 * binary_tree_node - create a binary tree node
 * @parent: starting tree node
 * @value: the value of the tree node
 * Return: pointer to new node or NULL
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *i = malloc(sizeof(binary_tree_t));

	if (i == NULL)
		return (NULL);

	i->parent = parent;
	i->left = NULL;
	i->right = NULL;
	i->n = value;

	return (i);
}

