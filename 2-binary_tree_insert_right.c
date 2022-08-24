#include "binary_trees.h"
/**
 * binary_tree_insert_right - function that inserts a nodie as the left-child
 * @parent: pointer to the node to insert the left-chlid in
 * @value: value to store in the new node
 *
 * Return: pointer to node or NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node;
	binary_tree_t *right;

	node = malloc(sizeof(binary_tree_t));
	right = malloc(sizeof(binary_tree_t));
	if (parent == NULL || node == NULL)
	{
		return (NULL);
	}
	node->parent = parent;
	node->n = value;
	node->left = NULL;
	node->right = NULL;
	while (parent->right != NULL)
	{
		if (value >= parent->n)
		{
			right = parent->right;
			parent->right = node;
			node->right = right;
			right->parent = node;
			return (node);

		}
		parent->right = parent->left->right;
	}
	parent->right = node;
	return (node);
}
