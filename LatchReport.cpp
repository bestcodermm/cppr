#include "LatchReport.h"

LatchReport::LatchReport(string name)
{
  LatchName = name;
}

LatchReport::~LatchReport()
{

}

void LatchReport::SetPreSlackSetup(double n)
{
  pre_slack_setup = n;
}

void LatchReport::SetPostSlackSetup(double n)
{
  post_slack_setup = n;
}

void LatchReport::SetPreSlackHold(double n)
{
  pre_slack_hold = n;
}

void LatchReport::SetPostSlackHold(double n)
{
  post_slack_hold = n;
}

void LatchReport::SetNUMPath(int n)
{
  NUMPath = n;
}

int LatchReport::GetNUMPath()
{
  return NUMPath;
}

double LatchReport::GetPreSlackSetup()
{
  return pre_slack_setup;
}


double LatchReport::GetPostSlackHold()
{
  return post_slack_hold;
}

double LatchReport::GetPostSlackSetup()
{
  return post_slack_setup;
}

double LatchReport::GetPreSlackHold()
{
  return pre_slack_hold;
}

const vector<Path*>& LatchReport::getLatchReport() const
{
  return LatchPinReport;
}

void LatchReport::AddReport(Path* pPath)
{
  LatchPinReport.push_back(pPath);
}

void LatchReport::InitializeVector(vector<Path*>& PathV)
{
  LatchPinReport = PathV;
}
