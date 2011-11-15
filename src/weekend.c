/*
    WeekEND v. 1.1
    Copyright (C) 2011  Jon Wickmann

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.


    git@jmwickma.fastmail.fm
    http://jmwickma.fastmail.fm/weekend.html

*/


#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#include "weekend.h"



void licence()
{

    printf("%s\n",copyleft);
    return;
}


void help()
{

    printf("%s\n",help_msg);
    return;
}

int getDateAsNumeral(_Bool POSIX)
{

    struct tm *ptr;
    time_t lt;
    char str[160];

    lt = time(NULL);
    ptr = localtime(&lt);
    if(ptr==NULL)
    {
        fprintf(stderr,"Failed to convert to local time\n");
        return ERROR;
    }

    // ISO C99 and POSIX.2-1992 standardised
    if(strftime(str, 100, "%u", ptr)==0)
    {
        fprintf(stderr,"Failed to extract week day\n");
        return ERROR;
    }


    // get as integer
    int dayn=atoi(str);


    // For compatibility with the old version convert 7 to 0
    if((dayn==7) & (!POSIX))
    {
        dayn=0;
    }

    return dayn;


}

int main(int argc, char *argv[])
{

    if(argc==2)
    {

        if(strcmp(argv[1],"/sd")==0)
        {
            return getDateAsNumeral(false);
        }
        if(strcmp(argv[1],"-sd")==0)
        {
            return getDateAsNumeral(false);
        }
        if(strcmp(argv[1],"/d")==0)
        {
            int tmp=getDateAsNumeral(false);
            if(tmp!=ERROR)
            {
                printf("The week day number is: %i\n",tmp);
            }

            return tmp;
        }
        if(strcmp(argv[1],"-d")==0)
        {
            int tmp=getDateAsNumeral(false);
            if(tmp!=ERROR)
            {
                printf("The week day number is: %i\n",tmp);
            }

            return tmp;
        }

        if(strcmp(argv[1],"/sp")==0)
        {
            return getDateAsNumeral(true);
        }
        if(strcmp(argv[1],"-sp")==0)
        {
            return getDateAsNumeral(true);
        }
        if(strcmp(argv[1],"/p")==0)
        {
            int tmp=getDateAsNumeral(true);
            if(tmp!=ERROR)
            {
                printf("The week day number is: %i\n",tmp);
            }

            return tmp;
        }
        if(strcmp(argv[1],"-p")==0)
        {
            int tmp=getDateAsNumeral(true);
            if(tmp!=ERROR)
            {
                printf("The week day number is: %i\n",tmp);
            }
            return tmp;
        }


        if(strcmp(argv[1],"-l")==0)
        {
            licence();
            return ERROR;
        }

        if(strcmp(argv[1],"/l")==0)
        {
            licence();
            return ERROR;
        }

        if(strcmp(argv[1],"-h")==0)
        {
            help();
            return ERROR;
        }

        if(strcmp(argv[1],"/h")==0)
        {
            help();
            return ERROR;
        }



    }

    licence();
    return ERROR;

}



