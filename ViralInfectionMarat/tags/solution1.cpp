#include <iostream>
#include <string>
#include <vector>
#define FOR(i,a,b) for(int i= (a); i<((int)b); ++i)
using namespace std;
class StarTraveller {
private:

 int nstar;
    vector<int> used;
public:
   
    // check if star used on travel 
	int init(vector<int> stars);
	 vector<int> makeMoves(vector<int> ufos, vector<int> ships);
};
    int  StarTraveller::init(vector<int> stars) {
        nstar = stars.size() / 2;
        used.resize(nstar, 0);//initi value for star is zero
        return 0;
    }

    vector<int> StarTraveller::makeMoves(vector<int> ufos, vector<int> ships) {
        vector<int> moves;
        FOR(i, 0, nstar) {
            if (!used[i]) {
                used[i] = 1;
                moves.push_back(i);
                if (moves.size() == ships.size()) {
                    break;
                }
            }
        }

        // Make sure the return is filled with valid moves for the final move.
        while (moves.size() < ships.size()) {
            moves.push_back((ships[moves.size()] + 1) % nstar);
        }
        return moves;
    }

template<class T> void getVector(vector<T>& v)
{
    for (int i = 0; i < v.size(); ++i)
        cin >> v[i];
}

int main()
{
    int NStars;
    cin >> NStars;
    vector<int> stars(NStars);
    getVector(stars);

    StarTraveller algo;
    int ignore = algo.init(stars);
    cout << ignore << endl;
    cout.flush();

    while (true)
    {
        int NUfo;
        cin >> NUfo;
        if (NUfo<0) break;
        vector<int> ufos(NUfo);
        getVector(ufos);
        int NShips;
        cin >> NShips;
        vector<int> ships(NShips);
        getVector(ships);
        vector<int> ret = algo.makeMoves(ufos, ships);
        cout << ret.size() << endl;
        for (int i = 0; i < ret.size(); ++i) {
            cout << ret[i] << endl;
        }
        cout.flush();
    }
	
	return 0;

}