

#ifndef CGTESTER_HH
#define CGTESTER_HH

#define DO_NOT_ADD_INDEXES_TO_ARRAY_NAMES 1

#include "rcs.hh"

#define EXAMPLE_MESSAGE_TYPE (101)
#define INSIDE_COMMAND_TYPE (1001)
#define INSIDE_STATUS_TYPE (2001)


enum enumtest{ c=7,d, e, a=7, b};

class nonupdateableClass : public  NML {
public:
  nonupdateableClass();
  void *ptr;
}; 

class INSIDE_COMMAND_BASE: public RCS_CMD_MSG
{
public:
  INSIDE_COMMAND_BASE(NMLTYPE t,size_t s) : RCS_CMD_MSG(t,s) {};
  void update(CMS *);
  int inside_command_base_int;
};


class INSIDE_COMMAND: public INSIDE_COMMAND_BASE
{
public:
  INSIDE_COMMAND() : INSIDE_COMMAND_BASE(INSIDE_COMMAND_TYPE,sizeof(INSIDE_COMMAND)) {};
  void update(CMS *);
  int inside_command_int;
};



class INSIDE_STATUS_BASE: public RCS_STAT_MSG
{
public:
  INSIDE_STATUS_BASE(NMLTYPE t,size_t s) : RCS_STAT_MSG(t,s) {};
  void update(CMS *);
  int inside_status_base_int;
};


class INSIDE_STATUS: public INSIDE_STATUS_BASE
{
public:
  INSIDE_STATUS() : INSIDE_STATUS_BASE(INSIDE_STATUS_TYPE,sizeof(INSIDE_STATUS)) {};
  void update(CMS *);
  int inside_status_int;
};




typedef struct _mystruct {
  
  INSIDE_STATUS is;
  int i; /* default=10 */
  char c;
  float f;
  double d;
  int ia[3];
  char ca[3];
  unsigned char hexdata[10];
  char name[60];

  int i_attribute; //attribute,default=10 
  char c_attribute; //attribute
  float f_attribute; //attribute
  double d_attribute; //attribute
  char ca_attribute[10]; //attribute

  enum enumtest enumtestvar;


  enum enumtest enumtestvar_array[5];
  DECLARE_NML_DYNAMIC_LENGTH_ARRAY(enum enumtest, enumtest_dla,5);
  //DECLARE_NML_UNBOUNDED_ARRAY(enum enumtest, enumtest_unbounded);

  float fa[3];
  double da[3];
  PM_CARTESIAN cart;
  PM_CARTESIAN cart_array[3];
  PM_HOMOGENEOUS homo;
  PM_HOMOGENEOUS homo_array[3];
  INSIDE_COMMAND ic;
  INSIDE_COMMAND ic_array[3];

  

  DECLARE_NML_DYNAMIC_LENGTH_ARRAY(char,cda, 10);
  DECLARE_NML_DYNAMIC_LENGTH_ARRAY(int,ida, 10);
  DECLARE_NML_DYNAMIC_LENGTH_ARRAY(float,fda, 10);
  DECLARE_NML_DYNAMIC_LENGTH_ARRAY(double,dda, 10);
  DECLARE_NML_DYNAMIC_LENGTH_ARRAY(PM_CARTESIAN,cart_dynamic_array,10);
  DECLARE_NML_DYNAMIC_LENGTH_ARRAY(PM_HOMOGENEOUS, homo_dynamic_array,10);
  DECLARE_NML_DYNAMIC_LENGTH_ARRAY(INSIDE_COMMAND, ic_dynamic_array,10);

  DECLARE_NML_UNBOUNDED_ARRAY(char,initialized_cda_unbounded); //default=foobar

  DECLARE_NML_UNBOUNDED_ARRAY(char,cda_unbounded);
  DECLARE_NML_UNBOUNDED_ARRAY(int,ida_unbounded);
  DECLARE_NML_UNBOUNDED_ARRAY(float,fda_unbounded);
  DECLARE_NML_UNBOUNDED_ARRAY(double,dda_unbounded);
  //DECLARE_NML_UNBOUNDED_ARRAY(PM_CARTESIAN,cart_unbounded);
  //DECLARE_NML_UNBOUNDED_ARRAY(PM_HOMOGENEOUS, homo_unbounded);
  DECLARE_NML_UNBOUNDED_ARRAY(INSIDE_COMMAND, ic_unbounded);
  
}mystruct;


class EXAMPLE_MESSAGE: public NMLmsg
{
public:
  EXAMPLE_MESSAGE();
  void update(CMS *);
  
  INSIDE_STATUS is;
  int i; /* default=10 */
  char c;
  float f;
  double d;
  int ia[3];
  char ca[3];
  unsigned char hexdata[10];
  char name[60];

  int i_attribute; //attribute,default=10 
  char c_attribute; //attribute
  float f_attribute; //attribute
  double d_attribute; //attribute
  char ca_attribute[10]; //attribute
  enum enumtest enumtestvar;


  enum RCS_STATUS rcsstatus;
  enum enumtest enumtestvar_array[5];
  DECLARE_NML_DYNAMIC_LENGTH_ARRAY(enum enumtest, enumtest_dla,5);
  //DECLARE_NML_UNBOUNDED_ARRAY(enum enumtest, enumtest_unbounded);

  float fa[3]; /*default=5.0*/
  double da[3];
  PM_CARTESIAN cart;
  PM_CARTESIAN cart_array[3];
  PM_HOMOGENEOUS homo;
  PM_HOMOGENEOUS homo_array[3];
  INSIDE_COMMAND ic;
  INSIDE_COMMAND ic_array[3];

  DECLARE_NML_DYNAMIC_LENGTH_ARRAY(char,cda, 10);
  DECLARE_NML_DYNAMIC_LENGTH_ARRAY(int,ida, 10);
  DECLARE_NML_DYNAMIC_LENGTH_ARRAY(float,fda, 10);
  DECLARE_NML_DYNAMIC_LENGTH_ARRAY(double,dda, 10);
  DECLARE_NML_DYNAMIC_LENGTH_ARRAY(PM_CARTESIAN,cart_dynamic_array,10);
  DECLARE_NML_DYNAMIC_LENGTH_ARRAY(PM_HOMOGENEOUS, homo_dynamic_array,10);
  DECLARE_NML_DYNAMIC_LENGTH_ARRAY(INSIDE_COMMAND, ic_dynamic_array,10);


  DECLARE_NML_UNBOUNDED_ARRAY(char,cda_unbounded);
  DECLARE_NML_UNBOUNDED_ARRAY(int,ida_unbounded);
  DECLARE_NML_UNBOUNDED_ARRAY(float,fda_unbounded);
  DECLARE_NML_UNBOUNDED_ARRAY(double,dda_unbounded);
  //DECLARE_NML_UNBOUNDED_ARRAY(PM_CARTESIAN,cart_unbounded_array);
  //DECLARE_NML_UNBOUNDED_ARRAY(PM_HOMOGENEOUS, homo_unbounded_array);
  DECLARE_NML_UNBOUNDED_ARRAY(INSIDE_COMMAND, ic_unbounded_array);

  mystruct s;
  mystruct sa[3];
  DECLARE_NML_DYNAMIC_LENGTH_ARRAY(mystruct,sda, 10);
  DECLARE_NML_UNBOUNDED_ARRAY(mystruct,sda_unbounded);
  long lastvar;
};

/* Declare the NML Format function. */
int cgtester_format(NMLTYPE type, void *buf, CMS *cms);

#endif

  
