#include <iostream>
using namespace std;
#include <cstdio>
#include <string>
#include <vector>
#include "mat.hpp"
namespace ariel{
	string mat(int x, int y, char z,char w){
		if((x % 2 == 0) || (y % 2 == 0)){
			throw std::invalid_argument( "Mat size is always odd" );
			return "";
		}
		if(((33 > z) || (z > 126)) || ((33 > w) || (w > 126))){
			throw std::invalid_argument("symboll illeagal");
			return "";
		}
		
		vector<vector<int>> s1( y , vector<int> (x));
		// int s1[y][x];
		string s2;
		int q = 1;
		int t = 0;
	int max = 0;
	if (y>x){
		max = y;
	}
	else{
		max = x;
	}
	//create the carpetwith 0/1 in matrix
	for(int  k = 0; k < max; k++){
		for(int i = k; i < y-k; i++){
			for(int j = k ; j < x-k ; j++){
				if((i == k) || (i == y-1-k)){
					s1[i][j] = q;
					// s1.insert(s1.begin()+i+j,q);
				}
				else{
					if((j==k) || (j == x-1-k)){
						s1[i][j] = q;
						// s1.insert(s1.begin()+i+j,q);
					}
					else{
							s1[i][j] = t;
							// s1.insert(s1.begin()+i+j,t);
						}
						
				}
			}	
		}
		if((y-k == 3) || (x-k == 3)){
			break;
		}
		int temp = q;
		q = t;
		t = temp;
	}
	//replace 0/1 with the chareacters
		for(int i = 0; i < y; i++){
			for(int j = 0 ; j < x ; j++){
				if ((s1[i][j]) == 1){
					s2 += z;
				}
				else{
					s2 += w;
				}		
			}
			s2 += "\n";
			
		}
		return s2;
	}
}
