#include "binary_trees.h"
binary_tree_t maxi(binary_tree_t *node)
{
	while (node->right != NULL)
	{
		node = node->right;
	}
	return (node);
}
binary_tree_t mini(binary_tree_t *node)
{
	while (node->left != NULL)
	{
		node = node->left;
	}
	return (node);
}
binary_tree_t succ(binary_tree_t *node)
{
	binary_tree_t *x;

	if (node->right != NULL)
	{
		return (mini(node->right));
	}
	x = node->parent;
	while (x != NULL && node == x->right)
	{
		node = x;
		x = x->parent;
	}
	return (x);
}
binary_tree_t pred(binary_tree_t *node)
{
	binary_tree_t *x;

	if (node->left != NULL)
	{
		return (maxi(node->left));
	}
	x = node->parent;
	while (x != NULL && node == x->left)
	{
		node = x;
		x = x->parent;
	}
	return (x);
}
void shift-nodes(binary_tree_t *tree, binary_tree_t *node1, binary_tree_t *node2)
{
	if (node1->parent == NULL)
	{
		tree->parent = node2;
	}
	else
	{
		if (node1 == node1->parent->left)
			node1->parent->left = node2;
		else
			node1->parent->right = node2;
	}
	if (node2 != NULL)
		node2->parent = node1->parent;
}
void bina(binary_tree_t *tree)
{

}
