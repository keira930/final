#include <map>
#include <queue>
#include <cstdlib>
#include <cstdio>
#include <iostream>
#include <string>
using namespace std;

int main(int argc, char **argv){
    queue <map<int,string> > mapping;
    //map<int,string> a;
    //a[2]="hi";
    mapping.emplace(2,"hi");
    cout<<mapping.size();

}