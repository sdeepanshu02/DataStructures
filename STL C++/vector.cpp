//#include <iostream>
#include<bits/stdc++.h>   //header file which include many header files

using namespace std;

#define boost1 std::ios::sync_with_stdio(false); 	// write boost1; in first line of main
#define boost2 cin.tie(NULL);	// write boost2; in first line of main
#define forp(i,a,b) for( i=a;i<=b;i++)
#define FOR(tt,a,b) for(int tt=a;tt<=b;tt++)
#define rep(i,n)    for( i=0;i<n;i++)
#define ren(i,n)    for( i=n-1;i>=0;i--)
#define forn(i,a,b) for( i=a;i>=b;i--)

typedef long long  ll;
typedef unsigned long long ull;

int main()
{
    boost1;
    boost2;
    vector <int> vec1;  // Defined a vector
    vector <int> :: iterator itr;   // Defined an iterator
    vector <int> :: reverse_iterator ritr;  // Defined a reverse iterator

    for (int i = 1; i <= 5; i++)
        vec1.push_back(i);

    // begin() :    Returns an iterator pointing to the first element in the vector
    // end() :      Returns an iterator pointing to the theoretical element that follows
    //              last element in the vector
    cout << "Output of begin to end:\n";
    for (itr = vec1.begin(); itr != vec1.end(); ++itr)
        cout << *itr << '\t';
    cout << endl << endl;

    // rbegin() :   Returns a reverse iterator pointing to the last element in the vector
    //              (reverse beginning). It moves from last to first element
    // rend() :     Returns a reverse iterator pointing to the theoretical element preceding
    //              the first element in the vector (considered as reverse end)
    cout << "Output of rbegin to rend(i.e printed in reverse order):\n";
    for (ritr = vec1.rbegin(); ritr != vec1.rend(); ++ritr)
        cout << *ritr << '\t';

    cout << "Size : " << vec.size();
    cout << "\nCapacity : " << g1.capacity();
    cout << "\nMax_Size : " << g1.max_size();
    return 0;
}
