
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __org_omg_CORBA_Context__
#define __org_omg_CORBA_Context__

#pragma interface

#include <java/lang/Object.h>
extern "Java"
{
  namespace org
  {
    namespace omg
    {
      namespace CORBA
      {
          class Any;
          class Context;
          class NVList;
      }
    }
  }
}

class org::omg::CORBA::Context : public ::java::lang::Object
{

public:
  Context();
  virtual ::java::lang::String * context_name() = 0;
  virtual ::org::omg::CORBA::Context * create_child(::java::lang::String *) = 0;
  virtual void delete_values(::java::lang::String *) = 0;
  virtual ::org::omg::CORBA::NVList * get_values(::java::lang::String *, jint, ::java::lang::String *) = 0;
  virtual ::org::omg::CORBA::Context * parent() = 0;
  virtual void set_one_value(::java::lang::String *, ::org::omg::CORBA::Any *) = 0;
  virtual void set_values(::org::omg::CORBA::NVList *) = 0;
  static ::java::lang::Class class$;
};

#endif // __org_omg_CORBA_Context__