#ifndef INCLUDED_CODERULES
#define INCLUDED_CODERULES

class CodeRules
{
	enum   	Boolean {YES, NO};
	typedef int (*PointerToFunctionOfReturnInt)();
public:
	// CREATORS
	CodeRules():M_NNORMALVARIABLE(3){}
	
	// MANIPULATORS
	int normalFunction();
	static int staticFunction();
	
	// ACCESSORS
	
private:
	int m_nMoramlVariable;
	int const  M_NNORMALVARIABLE;

	static int s_nStaticVariable;

	char * m_pPointerVariable;
};


inline int CodeRules::normalFunction()
{
	return 0;
}
#endif
