#include<bits/stdc++.h>
using namespace std;

// Is attacked?
//
// nQueens returning boolean
//
// A global board array
//
// main
//

vector<string> board;
vector<vector<string>> masterboard;
int N;

void printboard(){
	for(int m=0; m<masterboard.size(); m++){
		for(int i=0; i<N; i++){
			for(int j=0; j<N; j++){
				cout << masterboard[m][i][j] << " ";
			}cout << "\n";
		}

	cout << "----------------------------------------------------------------\n";
	}

}


void singleboard(vector<string> x){
	for(int i=0; i<N; i++){
		for(int j=0; j<N; j++){
			cout << x[i][j] << " ";
		}printf("\n");
	}
}

void resetboard(){
	for(int i=0; i<N; i++){
		for(int j=0; j<N; j++){
			board[i][j]='.';
		}
	}
}

bool isattacked(int i, int j){
	for(int x=0; x<board.size(); x++){
		for(int y=0; y<board[0].size(); y++){
			if(board[x][y] == 'Q'){
				if(x == i || y==j || x+y==i+j || x-y == i-j)
					return true;
			}
		}
	}
	return false;
}

bool nQueens(int n, int start_i, int start_j){
	//printf("%d %d %d\n", n, start_i, start_j);
	if(n==0){
		return true; // If there are no queens to place
	}else{
		for(int i=start_i; i<board.size(); i++){
			for(int j=start_j; j<board[0].size(); j++){
				if(isattacked(i,j)) // if the queen is attacked move on
					continue;
				else{	
					board[i][j] = 'Q'; // place the queen 
					if(nQueens(n-1, 0, 0)) {// if the next queen gets placed then return true
						if(n==N){
							vector<string> x = board;
							//singleboard(board);
							if(find(masterboard.begin(), masterboard.end(), x)==masterboard.end())
								masterboard.push_back(x);
							resetboard();
							continue;
						}	
						return true;
					}
					else
						board[i][j] = '.'; // else reset the current queen
				}
			}
		}
	}
	return false;
}

int main(){
	int n;
	scanf("%d",&n);
	N=n;
	string s="";
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			s.push_back('.');
		}
		board.push_back(s);
		s = "";
	}
	nQueens(n, 0, 0);
	printboard();
	return 0;
}
