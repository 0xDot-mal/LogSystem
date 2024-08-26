# Docs Coming Soon

## Quick Guide

-  clone the repository
 - rename 'LogSystem.cpp' to *.h or *.hpp
  - include it in you're program.

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
Quick explanation `LGInit();` Initlialize the log level to a certain level you can use numbers from 0 to 7 or for a simple readable way use the constant expression that is declared on 'LogSystem.h'(and 'LogSystem.cpp')
`LGInfoLevel("Some text");` Logs the given string value(I should've used a template but I'm so tired.) Note that you can't set the log level to something different then the function calling:
```cpp
	LGInit(LG_LvINFO); 
	LGFatalLevel("AAAAA!");	
```
that's not going to work because you're initializing it as info level at first then you're trying to log it as fatal.

### EASY
you can  use the LogSystem.lib instead **NO EXPLANATION I NEED SLEEPING💤💤**
