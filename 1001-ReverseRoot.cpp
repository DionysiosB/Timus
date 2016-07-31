#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int main(){
    vector<double> numbers; double temp;
    while( scanf("%lf", &temp) == 1){numbers.push_back(temp);}
    for(int k = numbers.size() - 1; k >= 0; k--){printf("%.4lf\n",sqrt(numbers[k]));}
    return 0;
}
