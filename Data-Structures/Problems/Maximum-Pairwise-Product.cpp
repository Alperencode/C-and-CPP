// Didn't finish yet
#include <iostream>
#include <cstdlib>
#include <vector>
using namespace std;

long long MaxPairwiseProduct(vector<int>);
long long MaxPairwiseProductFast(vector<int>);
void StressTest();

int main(){

    StressTest();

    return 0;
}

long long MaxPairwiseProduct(vector<int> numbers){
    long long ans = 0;
    int n = numbers.size();

    for (int i = 0; i < n; i++){
        for (int j = i+1; j < n; j++){
            if ((long long)numbers[i]*numbers[j] > ans)
                ans = (long long)numbers[i]*numbers[j];
        }
    }
    return ans;    
}

long long MaxPairwiseProductFast(vector<int> numbers){
    int max1,max2;
    int n = numbers.size();

    for(int i=0; i<n; i++)
        if(numbers[i] > numbers[max1])
            max1 = i;

    for(int i=0; i<n; i++)
        if(numbers[i] > numbers[max2] && max1 != i)
            max2 = i;

    return (long long)numbers[max1]*numbers[max2];    
}

void StressTest(){
    int passCounter;

    while(true){
        srand(time(NULL));
        int n = rand() % 10 + 2;
        vector<int> x;
        for(int i=0; i<n; i++)
            x.push_back(rand() % 100000 + 2);
        
        long long ans1 = MaxPairwiseProduct(x);
        long long ans2 = MaxPairwiseProductFast(x);
        if(ans1 != ans2){
            cout << "Wrong answer, n: " << n << " List: ";
            for(int i=0; i<n; i++)
                cout << x[i] << " ";
            cout << "\n" << "answer1: " << ans1 << " answer2: " << ans2 << endl;
            cout << "Passed " << passCounter << " test." << endl;
            break;
        }else{
            cout << "Passed" << endl;
            passCounter++;
        }
    }
}
