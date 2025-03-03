#  									GitHub使用

------

#### 1.关联仓库

```c
天选4@LAPTOP-HVL0IQBD MINGW64 /d/github (master)
$ git remote add github https://github.com/dz-netizen/github.git

天选4@LAPTOP-HVL0IQBD MINGW64 /d/github (master)
$ git remote rm origin/*删除关联的仓库*/

天选4@LAPTOP-HVL0IQBD MINGW64 /d/github (master)
$ git remote -v/*查看远程仓库信息*/
github  https://github.com/dz-netizen/github.git (fetch)
github  https://github.com/dz-netizen/github.git (push)
```

#### 2  .gitignore

```c
天选4@LAPTOP-HVL0IQBD MINGW64 /d/github (master)
$ touch .gitignore/*新建.gitignore文件*/
/*之后打开.gitignore文件，编辑需要忽略的文件类型等
*.exe 忽略exe类型文档
temp/忽略名称为temp的目录
忽略某个特定文件自己书写即可*/
    
天选4@LAPTOP-HVL0IQBD MINGW64 /d/github (master)
$ git add .gitignore

天选4@LAPTOP-HVL0IQBD MINGW64 /d/github (master)
$ git commit -m "add gitignore file"
[master 032fe0a] add gitignore file
 1 file changed, 1 insertion(+)
 create mode 100644 .gitignore


/*如果需要忽略的文件已经提交，则需要：
天选4@LAPTOP-HVL0IQBD MINGW64 /d/github (master)
$ git rm --cached dfs/dfs.exe
rm 'dfs/dfs.exe'

天选4@LAPTOP-HVL0IQBD MINGW64 /d/github (master)
$ git commit -m "remove executable file"
[master 8107661] remove executable file
 1 file changed, 0 insertions(+), 0 deletions(-)
 delete mode 100644 dfs/dfs.exe
 */

天选4@LAPTOP-HVL0IQBD MINGW64 /d/github (master)
$ git push github master
Enumerating objects: 8, done.
Counting objects: 100% (8/8), done.
Delta compression using up to 20 threads
Compressing objects: 100% (4/4), done.
Writing objects: 100% (6/6), 557 bytes | 557.00 KiB/s, done.
Total 6 (delta 1), reused 0 (delta 0), pack-reused 0 (from 0)
remote: Resolving deltas: 100% (1/1), done.
To https://github.com/dz-netizen/github.git
   8596c93..8107661  master -> master

```

#### 3.上传、下拉

```c
天选4@LAPTOP-HVL0IQBD MINGW64 /d/github (master)
$ git pull github master/*表示下拉仓库github的master分支*/
From https://github.com/dz-netizen/github
 * branch            master     -> FETCH_HEAD
 * [new branch]      master     -> github/master
     
 天选4@LAPTOP-HVL0IQBD MINGW64 /d/github (master)
$ git push github master/*表示上传至仓库github的master分支*/
Enumerating objects: 6, done.
Counting objects: 100% (6/6), done.
Delta compression using up to 20 threads
Compressing objects: 100% (3/3), done.
Writing objects: 100% (4/4), 353 bytes | 353.00 KiB/s, done.
Total 4 (delta 0), reused 0 (delta 0), pack-reused 0 (from 0)
To https://github.com/dz-netizen/github.git
   220636e..8596c93  master -> master

/*如果出现以下报错*/
       
```

#### 4.取消代理

```c
天选4@LAPTOP-HVL0IQBD MINGW64 /d/github1 (master)
$ git push -u origin master
fatal: unable to access 'https://github.com/dz-netizen/github1.git/': Failed to connect to github.com port 443 after 14665 ms: Could not connect to server

天选4@LAPTOP-HVL0IQBD MINGW64 /d/github1 (master)
$ git config --global http.proxy 127.0.0.1:7890/*因为我的代理为7890*/

天选4@LAPTOP-HVL0IQBD MINGW64 /d/github1 (master)
$ git config --global https.proxy 127.0.0.1:7890
```

#### 5.分支、标签、回退

```c
git branch //查看分支
git branch <branch-name> //创建新的分支
git checkout <branch-name> //跳转到某一分支
git switch <branch-name>  //跳转到某一分支 
git checkout -b <branch-name> //创建某一分支并跳转
git merge <branch-name> //合并分支
```

#### 6.常见

```c
ls //显示所有文件

当git init 之后如果重新初始化，则删除.git 文件即可
    

```

