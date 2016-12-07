#include <stdio.h>
#include <sys/types.h>
#include <dirent.h>
#include <stdarg.h>
     
void afficheContenu(int nbRepertoire,...);

int main()
{
	afficheContenu(2,".","..");

    /*struct dirent * lecture;
    DIR *rep;
    rep = opendir("." );
    while ((lecture = readdir(rep))) {
        printf("%s\n", lecture->d_name);
    }
    closedir(rep);*/
  return 1;
}

void afficheContenu(int nbRepertoire,...){
	va_list liste;
	int i;
	char * nameRep;
	struct dirent * lecture;
	DIR *rep;
	va_start(liste,nbRepertoire);
	for(i=0;i<nbRepertoire;i++){
		nameRep = va_arg(liste,char *);
		rep = opendir(nameRep);
		printf("\n\n%s :\n",nameRep);
    while ((lecture = readdir(rep))) {
        printf("%s\n", lecture->d_name);
    }
    closedir(rep);		
	}
	va_end(liste);
}
