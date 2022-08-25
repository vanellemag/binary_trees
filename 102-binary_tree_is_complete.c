#include "binary_trees.h"
/**
 * countNodes - function that counts the number in tree
 * @root: pointer to tree
 *
 * Return: numdber of node
 */
int countNodes(binary_tree_t *root)
{
	if (root == NULL)
		return (0);
	return (1 + countNodes(root->left) + countNodes(root->right));
}
/**
 * binary_tree_is_complete - function that checks if tree iss complete
 * @tree: pointer to the root nodes of the tree to check
 *
 * Return: 1 if tree is complete or 0 otherwise
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

}
