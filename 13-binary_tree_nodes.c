#include "binary_trees.h"
/**
 * binary_tree_nodes - function that counts the nodes
 * @tree: pointer to the root nodes of the tree
 * Return: number of node
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t n;

	n = 0;
	if (tree == NULL)
		return (0);
	if (tree->left != NULL)
		n += 1;
	if (tree->right != NULL)
		n += 1;
	return (n);
}

