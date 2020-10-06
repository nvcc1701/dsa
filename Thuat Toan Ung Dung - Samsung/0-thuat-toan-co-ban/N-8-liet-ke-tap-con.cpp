// C++ program to find all combinations that 
// sum to a given value 
#include <bits/stdc++.h> 
using namespace std; 

void findcombination(vector<int> ar,vector<int> sol,int index)
{
   
    for(int i=0;i<sol.size();i++)
        cout<<sol[i]<<" ";
    cout<<endl;

    
    for(int i=index;i<ar.size();i++)
    {
        sol.push_back(ar[i]);
        findcombination(ar,sol,i+1);
        sol.pop_back();
        
    }
    
    return;
}
// Driver code 
int main() 
{ 
	vector<int> ar; 
	ar.push_back(1); 
	ar.push_back(2); 
	ar.push_back(3); 
	//ar.push_back(8); 
	int n = ar.size();
	vector<int> sol;
	//int curr_sum =0;
	int index=0;
	//int sum = 8; // set value of sum 
	findcombination(ar,sol,index);

	
	
} 
