#include "binary_trees.h"
/**
 * binary_tree_insert_left - function that inserts a nodie as the left-child
 * @parent: pointer to the node to insert the left-chlid in
 * @value: value to store in the new node
 *
 * Return: pointer to node or NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node;
	binary_tree_t *left;

	node = malloc(sizeof(binary_tree_t));
	left = malloc(sizeof(binary_tree_t));
	if (parent == NULL || node == NULL)
	{
		return (NULL);
	}
	node->parent = parent;
	node->n = value;
	node->left = NULL;
	node->right = NULL;
	while (parent->left != NULL)
	{
		if (parent->n >= value)
		{
			left = parent->left;
			parent->left = node;
			node->left = left;
			left->parent = node;
			return (node);

		}
		else
		{
			parent->left = parent->right->left;
		}
	}
	parent->left = node;
	return (node);
}
