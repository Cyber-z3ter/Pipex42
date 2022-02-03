# Pipex

Pipex is a 42school project that reproduces the same behaviour as the command shell pipe **|** , the programme will lunch as  **./pipex file1 cmd1 cmd2 file2** and behave exactely as as this shell command line **< infile cmd1 | cmd2 > outfile**.

This programme will be written in C language, using the following functions : 
 access(), open(), unlink(), close(), read(), write(), malloc(), waitpid(), wait(), free(), pipe(), dup(), dup2(), execve(), fork(), perror(), strerror() and exit().

## Description 

### access()
  Prototype :
  ```
  access(const char *path, int mode);
  ```
  The function checks the file corresponding to the **path** following to the given **mode** 
  
  **F__OK** Existence of the file.
  
  **X_OK** Execute permission.
  
  **W_OK** Write permission.
  
  **R_OK** Read permission.
  
  ### unlink()
  Prototype : 
  ```
  int  unlink ( const  char  * path );
  ```
  The function deletes the given file as **pathe** by breaking the hard link 
  
  #### exemple 
  ```
  #include	<stdio.h>
#include	<unistd.h>
int main(int argc, char *argv[])
{
	int i = 1;
	while(i < argc)
	{
		if(access(argv[i], F_OK) == 0) // checks the file if it exist
		{
			if(unlink(argv[i]) == 0)
			{
				printf("The file unlinked\n");
			}
			else
				printf("The file still linked\n");
		}
		else
			printf("The file doesn't exist\n");
		i++;
	}
	return(0);
}

  
  ```
  
 
