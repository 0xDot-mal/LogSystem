#include "LogSystem.h"
#include "color.h"

namespace logger {
	
	std::vector<const char*> levels = { "[INFO]: ", "[DEBUG]: ", "[WARN]: ", "[DEPRECATED]: ", "[ERROR]: ", "[CRITICAL]: ", "[THREAT]: ", "[FATAL]: " };
		
		// setting the log level to be info by default.

		int LG_SetLevel = LG_LvINFO;
			
		// initialize the log level
	
		void LGInit(const int P_LVL) {
			LG_SetLevel = P_LVL;
		}
		/*
		Levels
		*/
		// info level
		
		void LGInfoLevel(const std::string p_oup) {
			if (LG_SetLevel == LG_LvINFO) {
				std::cout << dye::yellow(levels[0]) << dye::yellow(p_oup);
			}
		}

		// debug level
		
		void LGDebugLevel(const std::string p_oup) {
			if (LG_SetLevel == LG_LvDEBUG) {
				std::cout << dye::green(levels[1]) << dye::green(p_oup);
			}
		}

		// warn level
		
		void LGWarnLevel(const std::string p_oup) {
			if (LG_SetLevel == LG_LvWARNING) {
				std::cout << dye::red_on_light_yellow(levels[2]) << dye::red_on_light_yellow(p_oup);
			}
		}

		// deprecated level

		void LGDeprecLevel(const std::string p_oup) {
			if (LG_SetLevel == LG_LvDEPRRECATED) {
				std::cout << dye::blue(levels[3]) << dye::blue(p_oup);
			}
		}

		// error level

		void LGErrorLevel(const std::string p_oup) {
			if (LG_SetLevel == LG_LvERROR) {
				std::cout << dye::red(levels[4]) << dye::red(p_oup);
			}
		}

		// critical level

		void LGCriticLevel(const std::string p_oup) {
			if (LG_SetLevel == LG_LvCRITICAL) {
				std::cout << dye::light_red(levels[5]) << dye::light_red(p_oup);
			}
		}

		// threat level

		void LGThreatLevel(const std::string p_oup) {
			if (LG_SetLevel == LG_LvTHREAT) {
				std::cout << dye::purple(levels[6]) << dye::purple(p_oup);
			} 
		}

		// fatal level

		void LGFatalLevel(std::string p_oup) {
			if (LG_SetLevel == LG_LvFATAL){
				std::cout << dye::black_on_red(levels[7]) << dye::black_on_red(p_oup);
			}
		}

		/*
		if you wanna save something inside of a file.
		*/



		// for storing the output inside of a *.log file.
		void storeLog(const char* filename, const std::string& output) {
			std::ofstream outfile(filename); 

			for (const char* level : levels) {
				if (output.find(level) != std::string::npos) {
					// Write to file
					outfile << output.c_str() << std::endl; 
				}
			}

			outfile.close();
		}
}
