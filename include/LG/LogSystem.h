#ifndef _LOGSYSTEM_H // i like writing it like that lol
#define _LOGSYSETM_H
// includes
// checking if is it debug mode or release mode
#ifdef DEBUG_MODE
// log macro for debugging 

#define DEBUG_LOG(x) std::cout << x;
// logging levels
constexpr int LG_LvINFO = 0;
constexpr int LG_LvDEBUG = 1;
constexpr int LG_LvWARNING = 2;
constexpr int LG_LvDEPRRECATED = 3;
constexpr int LG_LvERROR = 4;
constexpr int LG_LvCRITICAL = 5;
constexpr int LG_LvTHREAT = 6;
constexpr int LG_LvFATAL = 7;

#elif RELEASE_MODE
#define DEBUG_LOG() std::cout << "You can't use 'DEBUG_LOG' in release mode!" << std::endl;
#endif DEBUG_MODE
#include <iostream>
#include <vector>
#include <fstream>

namespace logger {

		

		// setting the log level to be info by default.


		// initialize the log level

		void LGInit(const int P_LVL);
		
		/*
		Levels:
		*/

		// info level

		void LGInfoLevel(std::string p_oup);

		// debug level

		void LGDebugLevel(std::string p_oup);

		// warn level

		void LGWarnLevel(std::string p_oup);

		// deprecated level

		void LGDeprecLevel(std::string p_oup);

		// error level

		void LGErrorLevel(std::string p_oup);

		// critical level

		void LGCriticLevel(std::string p_oup);

		// threat level

		void LGThreatLevel(std::string p_oup);

		// fatal level

		void LGFatalLevel(std::string p_oup);

		/*
		if you wanna save something inside of a file.
		*/



		// for storing the output inside of a *.log file.
		void storeLog(const char* filename);
}


#endif  _LOGSYSTEM_H 