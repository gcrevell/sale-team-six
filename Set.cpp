

#include "Set.h"

/*
 * Contributors: Gabriel Revells
 *
 * Parameter list:
 *	Element<E> e: The element to be added to the set
 *
 * Return value: void
 *
 * TODO: none
 */
template <class E>
void Set<E>::addElement(Element<E> e) {
	list.push_end(e);
}

/*
 * Contributors: Gabriel Revells
 *
 * Parameter list:
 *
 * Return value:
 *
 * TODO:
 */
template <class E>
Element<E> Set<E>::removeElement(Element<E> e) {
	list.remove(e);
}

/*
 * Contributors: Gabriel Revells
 *
 * Parameter list:
 *
 * Return value:
 *
 * TODO:
 */
template <class E>
std::list<Element<E>> Set<E>::getElements() {
	return list;
}

/*
 * Contributors: Gabriel Revells
 *
 * Parameter list:
 *	std::list<Element<E>> l: The new list to set the elements to
 *
 * Return value: void
 *
 * TODO: None
 */
template <class E>
void Set<E>::setElements(std::list<Element<E>> l) {
	list = l;
}

/*
 * Contributors: Gabriel Revells
 *
 * Parameter list: None
 *
 * Return value: Set<E> A new set that is the power set
 *		of the current set.
 *
 * TODO: Testing
 */
template <class E>
Set<E> Set<E>::powerSet() {
	
	Set<Set<E>> ret = new Set<Set<E>>();
	
	int max = pow(2, size());
	
	for (int i = 0; i < max; i++) {
		int temp = i;
		Set<E> s = new Set<E>();
		int n = size();
		
		for (std::list<int>::iterator it=list.end(); it != list.begin(); --it) {
			if (pow(2, n) <= temp) {
				s.addElement(*it);
				temp -= pow(2, n);
			}
			n--;
		}
		ret.push_end(s);
	}
	return ret;
}

/*
 * Contributors: Gabriel Revells
 *
 * Parameter list: None
 *
 * Return value: Set<E>: A new set that is the clone of the current set
 *
 * TODO: None
 */
template <class E>
Set<E> Set<E>::clone() {
	Set s = new Set();
	std::list<Element<E>> temp (list, list + list.size());
	s.setElements(temp);
}

/*
 * Contributors: Gabriel Revells
 *
 * Parameter list: None
 *
 * Return value: int: The size of the current set
 *
 * TODO: None
 */
template <class E>
int Set<E>::size() {
	return list.size();
}