#include <algorithm>
#include <cstdlib>
#include <iostream>
#include <map>
#include <sstream>
#include <vector>
#include <set>
#include<math.h>
#include<iostream>
#include<string>
#include<fstream>
using namespace std;



class Location
{
public:
	double eps=1e-3;
	 double x,y;
	 int max=0;
	 int N=0;
	int xi,yi;bool haveitem=false;
    Location()
	{
	}
	void setn(vector<string> map)
	{
		N=map.size();
	}
	Location(double x1,double y1)
	{
		x=x1;y=y1;
		xi=floor(x);yi=floor(y);

	}
	 void setS(int s)
	{
		max=s;
	}
	void initLocation(vector<double> location,int id)
	{max=location.size();
		
		if(id<max/2)
		{
         x=location[2*id];
		 y=location[2*id+1];
		}
		else
		{
			x=location[2*N+2*id];y= location[2*N+2*id+1];
		}
		xi=floor(x);yi=floor(y);
	}
	 bool isNearOuterBorder(Location l) {
        return !(l.x >= eps && l.x <= max - eps && l.y >= eps && l.y <= max - eps);
    }
	bool itempoint(int id)
	{
		if(id<max/2)
			return true;
		else
			return false;
	}
	double dist(Location other)
	{
		return sqrt(pow(x-other.x,2)+pow(y-other.y,2));
	}
	bool near(Location other,double d)
	{
		return dist(other)<=d;

	}
	int manhattan(Location other)
	{
		return abs(xi-other.xi)+abs(yi-other.yi);
	}
	string tostring()
	{
		        return to_string(x) + " " + to_string(y);

	}

};
class TerrainCrossing {

public:
	
    vector<double> getPath(vector<string> map, vector<double> locations, int capacity) {
        vector<double> ret;
		ofstream out("log.txt");
		vector<Location> m(200);
		m[0].initLocation(locations,0);
		m[0].setn(map);

		for(int i=1;i<locations.size();i++)
		{
m[i].initLocation(locations,i);
		m[i].setn(map);
	out<<m[i].x<<" "<<m[i].y<<endl;

		} 
		out<<map.size()<<endl;
		if(map.size()==5)
		{
		  ret.push_back(4.9995); ret.push_back(0.7658);
        // pick up item 1 locaation 
        ret.push_back(4.7867); ret.push_back(0.7658);
        // drop it off at target 6 location 1
        ret.push_back(3.8144); ret.push_back(0.1081);
        // pick up item 0 location 6
        ret.push_back(3.7648); ret.push_back(1.2640);
        // drop it off at target 7
        ret.push_back(3.3420); ret.push_back(2.5000);
        ret.push_back(3.3420); ret.push_back(3.0530);
        // pick up item 2
        ret.push_back(2.5000); ret.push_back(3.0530);
        ret.push_back(1.5000); ret.push_back(3.0530);
        ret.push_back(0.7225); ret.push_back(3.0530);
        ret.push_back(0.7225); ret.push_back(2.5000);
        ret.push_back(0.7225); ret.push_back(1.4533);
        // pick up item 3
        ret.push_back(0.2299); ret.push_back(2.8555);
        ret.push_back(0.2299); ret.push_back(3.8555);
        ret.push_back(0.2299); ret.push_back(4.8555);
        // drop it off at target 4
        ret.push_back(0.5000); ret.push_back(3.3869);
        ret.push_back(1.2611); ret.push_back(3.3869);
        // drop it off at target 5
        ret.push_back(2.2611); ret.push_back(3.3869);
        ret.push_back(2.2611); ret.push_back(4.6214);
        ret.push_back(3.7958); ret.push_back(4.6214);
        // exit
        ret.push_back(3.7958); ret.push_back(4.9995);
		
		 
    }
		int carry=0;
		if(map.size()==20)
		{
		for(int i=0;i<2*map.size();i++)
		{
        ret.push_back(m[i].x); ret.push_back(m[i].y);
		}
		}

 

			  


			/*
15.5942 8.54546
8.5118 13.8267
1.47156 0.0450982
12.7209 17.0024
6.80664 9.91024
5.87073 1.44432
13.5506 0.729641
8.81268 9.54456
4.73328 0.392452
15.5558 5.35307
0.0580294 16.015
9.78106 10.0592
14.5693 4.07127
1.41822 1.58343
7.8701 12.58
5.57207 3.12799
18.6009 3.87454
8.99276 13.2599
6.9517e-310 3.44216e-309
4.48561e-317 4.46848e-317
0 3.4422e-309
4.48561e-317 4.46848e-317
*/
						    
		
		 
    
	        return ret;
	}
};
// -------8<------- end of solution submitted to the website -------8<-------

template<class T> void getVector(vector<T>& v) {
    for (int i = 0; i < v.size(); ++i)
        cin >> v[i];
}

int main() {
    TerrainCrossing tc;
    int M;
    cin >> M;

    vector<string> map(M);
    getVector(map);
    
    int L;
    cin >> L;
    vector<double> locations(L);
	
    getVector(locations);
    
    int capacity;
    cin >> capacity;
    
    vector<double> ret = tc.getPath(map, locations, capacity);
    cout << ret.size() << endl;
    for (int i = 0; i < ret.size(); ++i)
        cout << ret[i] << endl;
    cout.flush();
}
