#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    scanf("%i/n", &n);
    char inp='k';
    int p=1;
    long long int andis=-1;
    long long int answer=0;
    int t;
    while(inp!='\n')
    {
        scanf("%c", &inp);

        if((inp!=' ')&&(inp!='x')&&(inp!='*'))
        {
            if(inp=='-'){
                p=-1;
            }
            else if(inp=='+')
            {
                p=1;
            }
            else
            {
                if(inp=='^')
                {
                    scanf("%d", &t);
                    if(andis==-1)
                    {
                        andis=1;
                    }
                    answer+=p*andis*pow(n,t);
                    andis=-1;
                    p=1;
                }
                else
                {
                    if(andis==-1)
                    {
                        andis=0;
                    }
                    andis*=10;
                    andis+=(int)(inp)-48;
                }
            }

        }
    }
    printf("%lli", answer);
}