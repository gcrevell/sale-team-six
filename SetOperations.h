#ifndef __SALE__SetOperations__
#define __SALE__SetOperations__

template <class E>
class SetOperations {
	public:
		static boolean subset(Set<E> set1, Set<E> set2);
		static Set<E> complement(Set<E> universe, Set<E> subset);
};

#endif
