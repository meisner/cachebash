//  Redistributions of any form whatsoever must retain and/or include the
//  following acknowledgment, notices and disclaimer:
//
//  This product includes software developed by the University of Michigan.
//
//  Copyright 2011 by David Meisner
//  at the University of Michigan
//
//  You may not use the name "University of Michigan" or derivations
//  thereof to endorse or promote products derived from this software.
//
//  If you modify the software you must place a notice on or within any
//  modified version provided or made available to any third party stating
//  that you have modified the software.  The notice shall include at least
//  your name, address, phone number, email address and the date and purpose
//  of the modification.
//
//  THE SOFTWARE IS PROVIDED "AS-IS" WITHOUT ANY WARRANTY OF ANY KIND, EITHER
//  EXPRESS, IMPLIED OR STATUTORY, INCLUDING BUT NOT LIMITED TO ANY WARRANTY
//  THAT THE SOFTWARE WILL CONFORM TO SPECIFICATIONS OR BE ERROR-FREE AND ANY
//  IMPLIED WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE,
//  TITLE, OR NON-INFRINGEMENT.  IN NO EVENT SHALL THE UNIVERSITY OF MICHIGAN
//  BE LIABLE FOR ANY DAMAGES, INCLUDING BUT NOT LIMITED TO DIRECT, INDIRECT,
//  SPECIAL OR CONSEQUENTIAL DAMAGES, ARISING OUT OF, RESULTING FROM, OR IN
//  ANY WAY CONNECTED WITH THIS SOFTWARE (WHETHER OR NOT BASED UPON WARRANTY,
//  CONTRACT, TORT OR OTHERWISE).
//
// statistic_manager.h
// David Meisner (davidmax@gmail.com)
//

#ifndef STATISTIC_MANAGER_H_
#define STATISTIC_MANAGER_H_

#include "cachebash/util.h"

namespace cachebash {

class Config;
class StatisticsCollection;
class WorkerManager;

class StatisticManager {
 public:
  StatisticManager(StatisticsCollection* base_collection,
                   Config* config,
                   WorkerManager* worker_manager);
  void StatisticsLoop();

 private:
  StatisticsCollection* base_collection_;
  Config* config_;
  WorkerManager* worker_manager_;

  DISALLOW_COPY_AND_ASSIGN(StatisticManager);
};

}  // namespace

#endif  // STATISTIC_MANAGER_H_
