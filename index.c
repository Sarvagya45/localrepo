#include<stdio.h>
int main(){
    printf("this is a new repo");
    printf("made a new branch");
    printf("main wala change");
    return 0;
}

//command to access directory
/*

cd 'folder ka name'
{isse hum us folder me access kar payenge files ko}

cd ..
{through this we can exit a certain directory}

mkdir 'folder/repo name'
{through this we can make new directory}
*/


//commands to make a new repo
/*
git init (used to create a new git repo from a directory)

git remote add orgin 'link of a repo'
it is used to add origin to new repo 

git remote -v (to verify remote )

git branch (to check branch)

git branch -M 'anyname' (to rename branch)

git push origin main
you can also write (git push -u origin main) if you don't want to write origin main again and again 
*/

//branch commands
/*
git branch (to check branch)
git branch -M 'name' (to change name of branch)
git checkout 'branch name' (to navigate to any other branch)
git checkout -b 'new branch name' (to create new branch)
git branch -d 'branch name' (to delete branch)
*/

//merging commands
/*
git diff 'branch name' (to compare commit,branches,file)
git merge 'branch name' (to merge two branches)
*/

//pull command
/*
git pull origin main
used to fetch and download contents from remote repo and update the local repo to match that content
*/