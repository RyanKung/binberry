
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __org_omg_PortableServer_ForwardRequestHelper__
#define __org_omg_PortableServer_ForwardRequestHelper__

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
          class TypeCode;
        namespace portable
        {
            class InputStream;
            class OutputStream;
        }
      }
      namespace PortableServer
      {
          class ForwardRequest;
          class ForwardRequestHelper;
      }
    }
  }
}

class org::omg::PortableServer::ForwardRequestHelper : public ::java::lang::Object
{

public:
  ForwardRequestHelper();
  static ::org::omg::PortableServer::ForwardRequest * extract(::org::omg::CORBA::Any *);
  static ::java::lang::String * id();
  static void insert(::org::omg::CORBA::Any *, ::org::omg::PortableServer::ForwardRequest *);
  static ::org::omg::PortableServer::ForwardRequest * read(::org::omg::CORBA::portable::InputStream *);
  static ::org::omg::CORBA::TypeCode * type();
  static void write(::org::omg::CORBA::portable::OutputStream *, ::org::omg::PortableServer::ForwardRequest *);
  static ::java::lang::Class class$;
};

#endif // __org_omg_PortableServer_ForwardRequestHelper__
