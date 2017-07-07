#ifndef LATCH_REPORT_HEADER
#define LATCH_REPORT_HEADER

#include "Path.h"
#include <iostream>
#include <cstring>
#include <vector>

class LatchReport
{
 private:
  string LatchName;
  vector<Path*> LatchPinReport;
  int NUMPath;
  double pre_slack_setup;
  double post_slack_setup;
  double pre_slack_hold;
  double post_slack_hold;
 public:
  LatchReport(string name);
  ~LatchReport();
  void SetPreSlackSetup(double n);
  void SetPostSlackSetup(double n);
  void SetPreSlackHold(double n);
  void SetPostSlackHold(double n);
  void SetNUMPath(int n);
  int GetNUMPath();
  double GetPreSlackSetup();
  double GetPostSlackSetup();
  double GetPreSlackHold();
  double GetPostSlackHold();
  const vector<Path*>& getLatchReport() const;
  void InitializeVector(vector<Path*>& PathV);
  void AddReport(Path* pPath);
};


#endif
