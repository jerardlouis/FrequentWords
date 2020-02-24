/*
=========================================================================================================
Jerard Dayanghirang Guevarra
CS280
February 24th, 2020
Lab5
=========================================================================================================
*/
#include <string>
#include <map>
#include <iostream>
#include <vector>

using namespace std;
//Program to find most frequently used words from standard input
int main(int argc, char*argv[]){
	
    vector<string> words; //Initializes vector to store words of highest count
    string word; //Stores words from standard input
    map<string,int> counter; //Map to store words and their count
	int highest = 0; //Variable used to determine which words have the highest count
    
    //Inputs words into word string & increments counter of word in counter map
    while(cin >> word){
        counter[word] ++;
    }
    
    //Iterate through map to find how many times the most frequently used words appear
    for(const pair<string,int>& i:counter){
        if(i.second > highest ){
            highest = i.second;
        }
    }
    
    //Iterate through words to see which words appear the most
    for(const pair<string,int>& i:counter){
        if(i.second == highest){
            words.push_back(i.first);
        }
    }
    
    //Return output
    for(int i = 0; i < words.size(); i++){
        cout << words[i] << endl;
    }
    
    //Close program
    return 0;
}