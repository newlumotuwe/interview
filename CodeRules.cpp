//#include <string>
#include "CodeRules.h"

int CodeRules::staticFunction()
{
	s_nStaticVariable++;
	return s_nStaticVariable;
}

int CodeRules::s_nStaticVariable = 3;




int g_idNmae;		//global variable



namespace LocallVaribale
{
static 	int			nId;
static 	short 		sId;
static 	unsigned int unId;
static 	long		lId;
static 	float		fId;
static 	double		dId;
static  char 		cId;
static  char 		szId[10];
//static 	std::string		strId;
static 	bool		bId;
static  int			arrId[10];
static	char*		pId;
}
