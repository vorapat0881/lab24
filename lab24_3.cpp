#include<iostream>
#include<set>

using namespace std;

//Write function count() here.
int count(int data[], int number){
    set<int> set_of_data; // create set to stores data
    for(int i=0; i< number; i++){ // loop to add (int)data in to set data
        set_of_data.insert(data[i]); // add data to set of data
    }
    return set_of_data.size(); // send size of set data
}
int main(){	
	int data[] = {1,2,4,5,4,8,2,1,2,4,6,1,4,4,4,2,1,0,12}; 
	
	cout << "There are " << count(data,sizeof(data)/sizeof(int)); 
	cout << " different numbers in data.";
	
	return 0;
}
