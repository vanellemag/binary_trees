#include "binary_trees.h"
/**
 * binary_tree_is_full - function that checks if a banary tree is full
 * @tree: pointer to the root node of the tree to check
 *
 * Return: 1 is full or 0 otherrise
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->left != NULL && (tree->right != NULL))
	{
		if (tree->parent != NULL)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
	return (0);
}
