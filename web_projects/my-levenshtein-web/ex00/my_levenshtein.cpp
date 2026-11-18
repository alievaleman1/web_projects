#include <iostream>
using namespace std;
int my_levenshtein(string s1,string s2){
    if (s1.size()!=s2.size()){
        return -1;
    }
    int sum=0;
    for (size_t i = 0;i <s1.size();i++)
    {
        if (s1[i]!=s2[i])
            sum++;
    }
    return sum;
}