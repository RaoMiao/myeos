#pragma once 
#include <boost/program_options.hpp>

namespace appbase{


   class abstract_plugin {
      public:
         enum state {
            registered, ///< the plugin is constructed but doesn't do anything
            initialized, ///< the plugin has initialized any state required but is idle
            started, ///< the plugin is actively running
            stopped ///< the plugin is no longer running
         };

         virtual ~abstract_plugin(){}
         virtual state get_state()const = 0;
         virtual const std::string& name()const  = 0;
         virtual void set_program_options( options_description& cli, options_description& cfg ) = 0;
         virtual void initialize(const variables_map& options) = 0;
         virtual void startup() = 0;
         virtual void shutdown() = 0;
   };

   template<typename Impl>
   class plugin;
}