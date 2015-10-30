#include<bits/stdc++.h>
    using namespace std;
    map < string, int > maps;
    char line[64];
    int main(void){
        int N, test;
        cin>>test;
        while(test--){
            maps.clear();
            scanf("%d\n", &N);
            while(N--){
                fgets(line, 64, stdin);
                line[32] = 0;
                ++maps[line];
            }
            map < string, int >::iterator iter;
            for(iter = maps.begin(); iter != maps.end(); iter++)
                printf("%s%d\n", iter->first.c_str(), iter->second);
            if(test) puts("");
        }
        return 0;
    }
