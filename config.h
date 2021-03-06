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
// config.h
// David Meisner (davidmax@gmail.com)
//

#ifndef CONFIG_H_
#define CONFIG_H_

#include <map>
#include <string>

#define MULTIGET_DISABLED -1
#define NO_RUNTIME_LIMIT -1

namespace cachebash {

class Parameter;
class SizeKeyDistribution;
class WarmupSequence;

// A class to store configuration parameters for the load tester.
class Config {
 public:
  bool debug_;
  int fixed_object_size_;
  float fraction_gets_;
  float fraction_multiget_;
  int multiget_n_gets_;
  int n_cpus_;
  int n_connections_per_worker_;
  int n_worker_threads_;
  std::string server_ip_address_;
  float runtime_;
  float rps_;
  SizeKeyDistribution* size_key_distribution_;
  double stat_print_interval_;
  bool use_naggles_;
  WarmupSequence* warmup_sequence_;

  Config();
  void Print();
};

}  // namespace cachebash

#endif  // CONFIG_H_
