/*
 * Cross platform macros.
 *
 */
#ifndef _RQT_GUI_CPP_DECL_H_
#define _RQT_GUI_CPP_DECL_H_

#include <ros/macros.h>

#ifdef ROS_BUILD_SHARED_LIBS  // ros is being built around shared libraries
  #ifdef rqt_gui_cpp_EXPORTS  // we are building a shared lib/dll
    #define RQT_GUI_CPP_DECL ROS_HELPER_EXPORT
  #else  // we are using shared lib/dll
    #define RQT_GUI_CPP_DECL ROS_HELPER_IMPORT
  #endif
#else  // ros is being built around static libraries
  #define RQT_GUI_CPP_DECL
#endif

#endif