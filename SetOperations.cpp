using namespace std;

#include "SetOperations.h";

template <class E>
boolean SetOperations::subset(Set<E> set1, Set<E> set2) {

	return (SetOperations::difference(set1, set2).size() == 0);

}

template <class E>
Set<E> SetOperations::complement(Set<E> universe, Set<E> subset) {

	return SetOperations::difference(universe, subset);

}
