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


#define ERROR 25

char copyleft[]="\nWeekEND v. 1.1\nCopyright (C) 2011  Jon Wickmann\n\nThis program is free software: you can redistribute it and/or modify\nit under the terms of the GNU General Public License as published by\nthe Free Software Foundation, either version 3 of the License, or\n(at your option) any later version.\n\nThis program is distributed in the hope that it will be useful,\nbut WITHOUT ANY WARRANTY; without even the implied warranty of\nMERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the\nGNU General Public License for more details.\n\nYou should have received a copy of the GNU General Public License\nalong with this program.  If not, see <http://www.gnu.org/licenses/>.\n\ngit@jmwickma.fastmail.fm\nhttp://jmwickma.fastmail.fm/weekend.html\n\nType weekend -h for help/usage\n\n";

char help_msg[]="Help/Usage\n==========\n\nweekend cmd\n\nWhere cmd:\n\t-h gives help\n\t-l shows the license\n\t-d return (as exit code) the week day as 1=Monday, ..., 7=Sunday\n\t-p return POSIX week day (as exit code), i.e. 0=Sunday, 1=Monday, ...\n\nFor silent operation use -sd or -sp\n\nThe - prefix can be replaced by /\n\nTime in the current locale is used\n\n";

void licence();

void help();

int getDateAsNumeral(_Bool POSIX);


