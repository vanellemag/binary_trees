#include <stdlib.h>
#include "binary_trees.h"

/**
 * main - entry
 *
 * Return: 0
 */
int main(void)
{
	binary_tree_t *root;
	size_t size;

	root = binary_tree_node(NULL, 98);

	root->left = binary_tree_node(root, 12);
	root->right = binary_tree_node(root, 402);
	binary_tree_insert_right(root->left, 54);
	binary_tree_insert_right(root, 128);
	binary_tree_print(root);
	
	size = binary_tree_balance(root);
	printf("Balance in %d: %+ld\n", root->n, size);
	size = binary_tree_balance(root->right);
	printf("SIZE from %d: %+ld\n", root->right->n, size);
	size = binary_tree_balance(root->left->left);
	printf("size %d: %+ld\n", root->left->left->n, size);
	size = binary_tree_balance(root->left->left->right);
	printf("size %d: %+ld\n", root->left->left->right->n, size);
	return (0);
}
