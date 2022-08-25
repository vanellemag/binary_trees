#include "binary_trees.h"
/**
 *binary_trees_ancestor - function that finds the lowest common ancestor of 2
 *@f: pointer to the first node
 *@s: pointer to the second node
 *Return: pointer to the lowest common ancestor node of 2 given nodes
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *f, const binary_tree_t *s)
{
	if (f != NULL || s != NULL)
	{
		if (f == s->parent)
			return (s->parent);
		if (s == f->parent)
			return (f->parent);
		if (f->parent == s->parent)
			return (f->parent);
		else
			return (binary_trees_ancestor(f->parent, s->parent));
	}
	return (NULL);
}
