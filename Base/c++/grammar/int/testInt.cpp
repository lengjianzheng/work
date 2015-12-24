/*************************************************************************
	> File Name: intTest.cpp
	> Author: 
	> Mail: 
	> Created Time: Mon 14 Dec 2015 01:58:26 AM PST
 ************************************************************************/

#include<iostream>
#include <vector>
#include <stdlib.h>

using namespace std;

int main(int argc,char **argv)
{
    if(true == 1)
        cout<<"true is 1 and  false is 0"<<endl;
    else
        cout<<"true is not 1"<<endl;
    int i = 1;
    char *p = (char *)&i;
    if((int)*p == 0)
        cout<<"big end"<<endl;
    else if((int)*p == 1)
            cout<<"little end"<<endl;
        else
            cout<<"unknown"<<endl;

    vector<int> v;
    bool k = strtoul(argv[1],NULL,10);
    for(int j = 0;j < sizeof(bool)*8;j++)
    {
        v.push_back(((k & (1<<j))>>j) & 1);
    }
    cout<<"k:"<<k<<endl;
    for(int kk = 0;kk < v.size();kk++)
    {
        cout<<v[kk];
        if((kk+1) % 8 == 0)
        cout<<"  ";
    }
    cout<<endl;

}
