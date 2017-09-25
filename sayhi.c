//Nazerke Yergali
//3EN04C
#include <stdio.h>     
#include <stdlib.h>    
#include <getopt.h>

int main(int argc, char **argv)
{
    int c;
    int digit_optind = 0;
    char *coptarg = NULL;

   while (1) {
        int this_option_optind = optind ? optind : 1;
        int option_index = 0;
        static struct option long_options[] = {
            {"kazakh",  no_argument, 0,  0 },
            {"russian",  no_argument, 0,  0 },
            {"english",  no_argument, 0,  0 },
            {"name",  required_argument, 0,  0 },
            {0,         0,                 0,  0 }
        };

       c = getopt_long(argc, argv, "kren:",
                 long_options, &option_index);
        if (c == -1)
            break;

       switch (c) {
        case 0:
            if (long_options[option_index].name == "kazakh"){
                    coptarg = "salem ";
                    printf("%s", coptarg);}
            else if(long_options[option_index].name == "russian"){
                    coptarg = "privet ";
                    printf("%s", coptarg);}
            else if (long_options[option_index].name == "english"){
                    coptarg = "hello ";
                    printf("%s", coptarg);}
            else if (long_options[option_index].name == "name"){
                    printf("%s", optarg);}
            break;

       case 'k':
            coptarg = "salem";
            printf("%s ",coptarg);
            break;

       case 'r':
            coptarg = "privet";
            printf("%s ",coptarg);
            break;

       case 'e':
            coptarg = "hello";
            printf("%s ",coptarg);
            break;
            
       case 'n':
            printf("%s \n",optarg);
            break;

       case '?':
            break;

       default:
            printf("?? getopt returned character code 0%o ??\n", c);
        }
        
        if (argv[0]=="./sayhi")
	        printf("hello\n");
        else if (argv[0]=="./sayprivet")
	        printf("privet\n");
        else if (argv[0]=="./saysalem")
	        printf("salem\n");
        
    
}
  exit(EXIT_SUCCESS);
}
