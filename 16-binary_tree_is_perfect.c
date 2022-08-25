#include "binary_trees.h"
/**
 * findDepth - function that give depth of tree
 * @node: tree
 * Return: depth
 */
int findDepth(const binary_tree_t *node)
{
	int d;

	d = 0;
	while (node != NULL)
	{
		d++;
		node = node->left;
	}
	return (d);
}

/**
 * isperfectRec - function that Test if a binary tree is perfect or not
 * @tree: pointer to tree
 * @d: int
 * @level: int
 * Return: 1 is true or 0 otherwise
 */
int isperfectRec(const binary_tree_t *tree, int d, int level)
{
	int b, n;

	b = 1;
	/* Empty tree is perfect*/
	if (tree == NULL)
	{
		return (b);
	}
	/* If leaf node, then its depth must be same as depth of all other leaves.*/
	if (tree->left == NULL && (tree->right == NULL))
	{
		return (d == (level + 1));
	}

	/* If internal node and one child is empty*/
	if (tree->left == NULL || (tree->right == NULL))
	{
		b = 0;
		return (b);
	}
	/* Left and right substrees must be perfect.*/
	n = level + 1;
	return (isperfectRec(tree->left, d, n) && isperfectRec(tree->right, d, n));

}
/**
 * binary_tree_is_perfect - function that checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 *
 * Return: 0 or NULL
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int d;

	d = findDepth(tree);
	return (isperfectRec(tree, d, 0));
}
