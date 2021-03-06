
#pragma once

// user defined headers
#include "CLData.h"
#include "FaultInjector.h"
#include "FunctionList.h"

using namespace llvm;
using namespace std;

/*! \brief Provides an implementation for injecting faults into control fault sites.
 *
 */

class CtrlFaults : public FaultInjector
{
 public:
  bool injectFaults(Module *M, set<Instruction*> instrList,
		    CLData* Cl, FunctionList *Fl);
 private:
  Module *module;
};


