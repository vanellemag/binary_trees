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
	
	size = binary_tree_size(root);
	printf("sIZE from %d: %lu\n", root->n, size);
	size = binary_tree_size(root->right);
	printf("SIZE from %d: %lu\n", root->right->n, size);
	size = binary_tree_size(root->left->right);
	printf("size %d: %lu\n", root->left->right->n, size);
	size = binary_tree_size(root->right->right);
	printf("size %d: %lu\n", root->right->right->n, size);
	return (0);
}
