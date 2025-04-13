#include "binary_trees.h"
/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the node
 * Return: perfec or not, tree is NULL return 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if ((binary_tree_nodes(tree->left) - binary_tree_nodes(tree->right) == 0) && (binary_tree_is_full(tree) == 1))
		return (1);

	return (0);
}

/**
 * binary_tree_is_full - checks if the binary tree is full
 * @tree: pointer to the node
 * Return: pointer or if tree if NULL return 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (!tree->left && !tree->right)
		return (1);

	if (tree->left && tree->right)
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));

	return (0);
}
/**
 * binary_tree_nodes - counts nodes with at least 1 child
 * @tree: pointer to the node
 * Return: if tree is NULL return 0
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	else
	{
		if (tree->left != NULL || tree->right != NULL)
		{
			return (binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right) + 1);
		}
	}
	return (0);
}
