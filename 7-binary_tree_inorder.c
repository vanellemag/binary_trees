#include "binary_trees.h"
/**
 * binary_tree_inorder - function that goes through a tree using in-order
 * @tree: pointer to the root node of the tree
 * @func: pointer toa function to call for each node.
 *
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree != NULL && func != NULL)
	{
		if (tree->left != NULL)
		{
			binary_tree_inorder(tree->left, func);
			/*func(tree->n);*/
		}
		func(tree->n);
		if (tree->right != NULL)
		{
			binary_tree_inorder(tree->right, func);
			/*func(tree->right->n);*/
			/*func(tree->right->n);*/
		}
	}
}
