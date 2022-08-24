#include "binary_trees.h"
/**
 * binary_tree_depth - function that measures the depth of a node
 * @tree: pointer to the root node
 *
 * Return: height
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t n;

	n = 0;
	if (tree != NULL || tree->parent != NULL)
	{
		if (tree->parent != NULL)
		{
			n += 1;
			if (tree->parent->parent != NULL)
			{
				n += 1;
				binary_tree_depth(tree->parent);
			}
		}
	}
	return (n);
}
