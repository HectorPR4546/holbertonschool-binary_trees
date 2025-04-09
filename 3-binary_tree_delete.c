#include "binary_trees.h"

/**
 * binary_tree_delete - delete a entire tree
 * @tree: te tree to be deleted
 * Return: node delete or if NULL do nothing
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
	{
		;
	}

	if (tree->left)
	{
		free(tree->left);
	}

	if (tree->right)
	{
		free(tree->right);
	}
}
