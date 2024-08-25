# Adding docs after 8 hours from uploading the repository(or even more) because I'm tired

## Quick Guide

1 - clone the repository
2 - rename 'LogSystem.cpp' to *.h or *.hpp
3 - include it in you're program.

### Basic hello example
```cpp
#include <LogSystem.h>

int main() {
	using namespace logger;
	LGInit(LG_LvINFO); 
	LGInfoLevel("You can bla bla for bla bla on bla bla\n");	

	LGInit(LG_LvDEBUG);
	LGDebugLevel("\nDebugging..\n");

	LGInit(LG_LvWARNING);
	LGWarnLevel("You can't use bla bla on global scop bla bla\n");

	LGInit(LG_LvERROR);
	LGErrorLevel("An error has occurred at bla bla try bla bla\n");

	LGInit(LG_LvDEPRRECATED);
	LGDeprecLevel("the bla bla version is deprecated.");
	
	LGInit(LG_LvTHREAT);
	LGThreatLevel("If the bla bla is on bla bla there's going to be a risk on bla bla\n");

	LGInit(LG_LvCRITICAL);
	LGCriticLevel("issued bla bla for an absolute value of bla bla\n");
	
	LGInit(LG_LvFATAL);
	LGFatalLevel("bla bla change to bla bla or report bla bla on bla bla\n");

	std::cin.get();
}
```
Quick explanation `LGInit();` Initlialize the log level to a certain level you can use numbers from 0 to 7 or for a simple readable way use the constant expressionthat is declared on 'LogSystem.h'(and 'LogSystem.cpp')
`LGInfoLevel("Some text");` Logs the given string value(I should've used a template but I'm so tired.) Don't forget that if do something like this:
```cpp
	LGInit(LG_LvINFO); 
	LGFatalLevel("AAAAA!");	
```
that's not going to working because you're initializing it as info level at first then you're trying to log it as a fatal.
