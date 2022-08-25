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
	binary_tree_t *size;

	root = binary_tree_node(NULL, 98);

	root->left = binary_tree_node(root, 12);
	root->right = binary_tree_node(root, 402);
	binary_tree_insert_right(root->left, 54);
	binary_tree_insert_right(root, 128);
	root->left->left = binary_tree_node(root->left, 10);
	root->right->left = binary_tree_node(root->right, 110);
	
	binary_tree_print(root);
	size = binary_tree_uncle(root->left);
	printf("Uncle of %d: %p\n", root->left->n, (void *)size);

	size = binary_tree_uncle(root->right->left);
	printf("Uncle of %d: %d\n", root->right->left->n, size->n);

	size = binary_tree_uncle(root->left->right);
	printf("Sibling of %d: %d\n", root->left->right->n, size->n); 

	return (0);
}
