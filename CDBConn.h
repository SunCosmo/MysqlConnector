#ifndef MYSQL_CONNECTOR_CDBCONN_H_
#define MYSQL_CONNECTOR_CDBCONN_H_

#include <string>

using namespace std;

class CDBConn {
public:
  CDBConn();
  virtual ~CDBConn();
  bool Init(const string& db_host, const string& username, const string& passwd, 
      const string& db_name, uint32_t db_port);
  MYSQL* GetConn();

private:
  string db_host_;
  uint32_t db_port_;
  string username_;
  string passwd_;
  string db_name_;
  MYSQL* mysql_conn_;
};




#endif  //MYSQL_CONNECTOR_CDBCONN_H_
