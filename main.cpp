#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//Just doing brute force method for now. Will update with a neighbor check later

int getClosestHole(int mouse,vector<int> holes){
  int retVal = holes.back();

  for(auto it = holes.begin(); it < holes.end(); ++it){
    if(abs(mouse - (*it)) < abs(mouse - retVal)){
	retVal = (*it);
      }

    
  }
  return retVal;
}



int main(){
  std::cout<<"starting app"<<std::endl;

  vector<int> mice = {1,4,9,15};
  vector<int> holes = {10,-5,0,16};

  sort(mice.begin(),mice.end(),[](const int &a, const int &b)-> bool{
				 return a < b;
		                });

  sort(holes.begin(), holes.end(),[](const int &a, const int &b)-> bool{ return a< b; });
  
  for(auto it = mice.begin(); it < mice.end(); ++it){
    
    cout<<"mice:"<<(*it)<<" hole is:"<<getClosestHole((*it), holes)<<endl;
  }

}
