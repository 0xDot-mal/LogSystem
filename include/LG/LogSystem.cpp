#include "LogSystem.h"
#include "color.h"
namespace logger {
	


		
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
				std::cout << dye::yellow("[INFO]: ") << dye::yellow(p_oup);
			}
		}

		// debug level
		
		void LGDebugLevel(const std::string p_oup) {
			if (LG_SetLevel == LG_LvDEBUG) {
				std::cout << dye::green("[DEBUG]: ") << dye::green(p_oup);
			}
		}

		// warn level
		
		void LGWarnLevel(const std::string p_oup) {
			if (LG_SetLevel == LG_LvWARNING) {
				std::cout << dye::red_on_light_yellow("[WARN]: ") << dye::red_on_light_yellow(p_oup);
			}
		}

		// deprecated level

		void LGDeprecLevel(const std::string p_oup) {
			if (LG_SetLevel == LG_LvDEPRRECATED) {
				std::cout << dye::blue("[DEPRECATED]: ") << dye::blue(p_oup);
			}
		}

		// error level

		void LGErrorLevel(const std::string p_oup) {
			if (LG_SetLevel == LG_LvERROR) {
				std::cout << dye::red("[ERROR]: ") << dye::red(p_oup);
			}
		}

		// critical level

		void LGCriticLevel(const std::string p_oup) {
			if (LG_SetLevel == LG_LvCRITICAL) {
				std::cout << dye::light_red("[CRITICAL]: ") << dye::light_red(p_oup);
			}
		}

		// threat level

		void LGThreatLevel(const std::string p_oup) {
			if (LG_SetLevel == LG_LvTHREAT) {
				std::cout << dye::purple("[THREAT]: ") << dye::purple(p_oup);
			}
		}

		// fatal level

		void LGFatalLevel(std::string p_oup) {
			if (LG_SetLevel == LG_LvFATAL){
				std::cout << dye::black_on_red("[FATAL]: ") << dye::black_on_red(p_oup);
			}
		}
}

