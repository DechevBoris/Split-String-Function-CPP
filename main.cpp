#include <iostream>
#include <string>
#include <vector>

using namespace std;

//works only if the delimeter is a char(for string delimeters-needs another implementation)
vector<string> split(const string& str, const char& delim)
{
    string topush("");
    vector<string> result;
    for(auto el : str)
    {
        if(el != delim)
            topush += el;
        else if(el == delim && topush != "")
        {
            result.push_back(topush);
            topush = "";
        }
    }
    if(topush != "")
        result.push_back(topush);
    return result;
}

int main()
{

    return 0;
}
