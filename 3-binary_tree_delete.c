#include "binary_trees.h"
/**
 * binary_tree_delete - function that deletes an tree
 * @tree: pointer to the root node of the tree to delete
 *
 * Return: pointer to node or NULL
 */
void binary_tree_delete(binary_tree_t *tree)
{
	binary_tree_t *node, *right, *left;

	left = malloc(sizeof(binary_tree_t));
	right = malloc(sizeof(binary_tree_t));
	node = malloc(sizeof(binary_tree_t));
	node = tree;

	if ((node != NULL) && (left != NULL) && (right != NULL))
	{
		left = node->left;
		right = node->right;
		if (left != NULL)
		{
			node->left = NULL;
			binary_tree_delete(left);
		}
		if (right != NULL)
		{
			node->right = NULL;
			binary_tree_delete(right);
		}
	}
}
