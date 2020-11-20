#include<iostream>
#include<stdio.h>
using   namespace std;
int main(int argc, char** argv)
{

      cout<<"this is a test"<<endl;
      int N=100;
      int sum=0;
      int i=1;
      while(i<N)
      {
          sum+=i; //这个是可编辑的那边 ,左边还没该
          i=i+1;
          cout<<"zonghe="<<sum<<endl;
      }
      cout<<"sum="<<sum<<endl;
      cout<<"the program is over!"<<endl;
      
}