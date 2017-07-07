#include "Path.h"
#include <cstring>
#include <fstream>
using namespace std;

Path::Path(string n , double pre_hold)
{
  PathInfo = n;
  pre_slack_hold = pre_hold;
  pre_slack_setup = 0;
  post_slack_setup = 0;
  post_slack_hold = 0;
}

Path::Path(double pre_setup, string n)
{
  PathInfo = n;
  pre_slack_setup = pre_setup;
  pre_slack_hold = 0;
  post_slack_setup = 0;
  post_slack_hold = 0;
}

Path::Path(string n, double pre_hold, double pre_setup)
{
  PathInfo = n;
  pre_slack_setup = pre_setup;
  pre_slack_hold = pre_hold;
  post_slack_setup = 0;
  post_slack_hold = 0;
}

Path::~Path()
{

}

string Path::GetPathName()
{
  return PathInfo;
}

void Path::SetPreSlackHold(double t)
{
  pre_slack_hold = t;
}

void Path::SetPreSlackSetup(double t)
{
  pre_slack_setup = t;
}

void Path::SetPostSlackHold(double t)
{
  post_slack_hold = t;
}

void Path::SetPostSlackSetup(double t)
{
  post_slack_setup = t;
}

const double Path::GetPreSlackHold()
{
  return pre_slack_hold;
}

const double Path::GetPreSlackSetup()
{
  return pre_slack_setup;
}

const double Path::GetPostSlackHold()
{
  return post_slack_hold;
}

const double Path::GetPostSlackSetup()
{
  return post_slack_setup;
}

/*
void Path::PrintPath(string filename)
{
  fstream PathStream;
  PathStream.open(filename.c_str(),fstream::app|fstream::out);
  
}
*/
