namespace MFC {
	namespace FileServices {
		class CFile {};

		class CMemFile {};
	}

	namespace Exceptions {
		class CException {};

		class CDaoException {};

		class COleException {};
	}

	namespace Arrays {
		class CArray {};

		class CByteArray {};
	}
}

int main() {
 /* CArray c;				// it is not directly available to you its part of Arrays.
	Arrays::CArray c	    // this not worked bz Array is also part of MFC.*/

	MFC::Arrays::CArray a;
	MFC::Exceptions::CDaoException b;
}

/*
- There are two ways, symbols of an application can be grouped viz. logically and physically.
- Namespaces are used to group symbols logically.
- Libraries are used to group symbols physically.
- Nesting of namespaces is possible.
- To refer symbol belonging to a namespace, a reference of namespace has to be mentioned alongwith symbol name.
*/