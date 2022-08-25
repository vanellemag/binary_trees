#include "binary_trees.h"
/**
 * binary_tree_balance - function that measures the balance factor of tree
 * @tree: pointer to the root node of the tree
 *
 * Return: balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->left != NULL && (tree->right != NULL))
	{
		return (+2);
	}
	else
		return (-1);
	if (tree->left == NULL && (tree->right == NULL))
		return (+0);
}
