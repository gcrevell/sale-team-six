using namespace std;

#include "Element.h";

template <class elementType>
elementType Element::getElement() {

	return object;

}

template <class elementType>
elementType Element::setElement(elementType newObject) {

	this.object = newObject;

}
