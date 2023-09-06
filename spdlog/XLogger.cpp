#include "XLogger.h"


std::string XLogger::x_log_dir = "./Log";
std::string XLogger::x_logger_name_prefix = "log";
std::string XLogger::x_log_confPath = "defConf.ini";
std::string XLogger::x_level = "all";
int XLogger::x_maxSize = 10;
#ifdef _DEBUG
bool XLogger::x_console = true;
#else
bool XLogger::x_console = false;
#endif // _DEBUG
