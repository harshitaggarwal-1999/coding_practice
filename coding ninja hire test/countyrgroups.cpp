#include<bits/stdc++.h>
using namespace std;



vector<int> population;
vector<int> sizeofset;



int findpopulation(int vertex)
{
    if (population[vertex] == vertex)
        return vertex;
    return population[vertex] = findpopulation(population[vertex]);
}

void mergingofset(int p1, int p2)
{
    if (sizeofset[p1] < sizeofset[p2])
    {
        
        
        population[p1] = p2;
        
        sizeofset[p2] += sizeofset[p1];


    } else {
        population[p2] = p1;


        sizeofset[p1] += sizeofset[p2];


    }




}



int main() {
    // write your code
    int n,p;
    cin >> n >> p;
    
    

    
    for (int i = 0; i < n; i++)
    {
        population.push_back(i);
        sizeofset.push_back(1);
    }
    int count = n;
    for (int i = 0; i < p; i++)
    {
        int a,b;
        cin>>a>>b;
       
        int p1 = findpopulation(a);
        int p2 = findpopulation(b);
        if (p1 != p2)
        {
            count--;
           mergingofset(p1, p2);
         }
            
        
    }
    cout << count << endl;
    return 0;
}