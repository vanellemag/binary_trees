#include "binary_trees.h"
/**
 * binary_tree_height - function that measures the height of a tree
 * @tree: pointer to the root node
 *
 * Return: height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t n;

	n = 0;
	if (tree != NULL)
	{
		if (tree->left != NULL)
		{
			n += 1;
			binary_tree_height(tree->left);
		}
		if (tree->right != NULL)
		{
			n += 1;
			binary_tree_height(tree->right);
		}
	}
	return (n);
}
