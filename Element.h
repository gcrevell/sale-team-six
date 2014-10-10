#ifndef __SALE__Element__
#define __SALE__Element__

template <class elementType>
class Element {
	private:
		elementType object;
	public:
		Object getElement();
		void setElement(elementType newObject);
};

#endif
