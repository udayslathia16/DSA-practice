#include <iostream>
#include <vector>
using namespace std;
//function that will handle all the below mentioned possibilities:
//possibility hai
    // ->path closed
    //out of bound
    //check is pos is already visited
bool isSafe(int srcx,int srcy,int newx,int newy,int maze[][4],int row,int col,vector<vector<bool>>&visited){
    if(
        (newx>=0 && newx<row) &&
        (newy>=0 && newy<col)&&
        maze[newx][newy]==1 &&
        visited[newx][newy]==false
        ){
            return true;
        }
    else{
        return false;
    }
}
void printAllPaths(int maze[][4],int row,int col,int srcx,int srcy,string &output,vector<vector<bool>>&visited){
    //base case
    //destination coordinates would be row-1 and col-1
    if(srcx ==row-1 && srcy== col-1){
        cout<<output<<endl;
        return;
    }
    //ek case
    //up
    int newx=srcx-1;
    int newy=srcy;
    if(isSafe(srcx,srcy,newx,newy,maze,row,col,visited)){
        //mark visited
        visited[newx][newy]=true;
        //call Recursion
        output.push_back('U');
        printAllPaths(maze,row,col,newx,newy,output,visited);
        output.pop_back();
        //backtracking
        visited[newx][newy]=false;
    }
    // right
    newx=srcx;
    newy=srcy+1;
    if(isSafe(srcx,srcy,newx,newy,maze,row,col,visited)){
        //mark visited
        visited[newx][newy]=true;
        //call Recursion
        output.push_back('R');
        printAllPaths(maze,row,col,newx,newy,output,visited);
        output.pop_back();
        //backtracking
        visited[newx][newy]=false;
    }

    // down
    newx=srcx+1;
    newy=srcy;
    if(isSafe(srcx,srcy,newx,newy,maze,row,col,visited)){
        //mark visited
        visited[newx][newy]=true;
        //call Recursion
        output.push_back('D');
        printAllPaths(maze,row,col,newx,newy,output,visited);
        output.pop_back();
        //backtracking
        visited[newx][newy]=false;
    }

    // left
    newx=srcx;
    newy=srcy-1;
    if(isSafe(srcx,srcy,newx,newy,maze,row,col,visited)){
            //mark visited
            visited[newx][newy]=true;
            //call Recursion
            output.push_back('L');
            printAllPaths(maze,row,col,newx,newy,output,visited);
            output.pop_back();
            //backtracking
            visited[newx][newy]=false;
        }
}

int main(){
    int maze[4][4]={
        {1,0,0,0},
        {1,1,0,1},
        {1,1,1,0},
        {1,1,1,1}
    };
    int row=4;
    int col=4;

    int srcx=0;
    int srcy=0;
    string output="";
    // create visited 2d array 
    vector<vector<bool>>visited(row,vector<bool>(col,false));
    if(maze[0][0]=0){
        //src is closed ie RAT cannot move
        cout<<"No Path Exists"<<endl;
    }
    else{
        printAllPaths(maze,row,col,srcx,srcy,output,visited);

    }
}