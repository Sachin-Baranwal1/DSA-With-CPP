#include <iostream>
#include <vector>
using namespace std;
int main(){
  vector < vector <int> > v(3,vector <int> (4,2));
  int row =  v.size();
  int column = v[0].size();
  for(int i=0;i<row;i++){
    for(int j=0;j<column;j++){
        cout << v[i][j] << " ";
    }
    cout << endl;
  }
  cout << "The no of rows is :: " << v.size()<< endl;
  cout << "The no of column is :: "<< v[0].size() << endl;
  return 0;
}