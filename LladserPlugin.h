#ifndef LLADSERPLUGIN_H
#define LLADSERPLUGIN_H

#include "Plugin.h"
#include "PluginProxy.h"
#include <string>
#include <vector>

class LladserPlugin : public Plugin
{
public: 
 std::string toString() {return "Lladser";}
 void input(std::string file);
 void run();
 void output(std::string file);

private: 
 std::string inputfile;
 std::string outputfile;

};

#endif
