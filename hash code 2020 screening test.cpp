#include<bits/stdc++.h>
using namespace std;
int main(){
	int a,b,c;
	cin>>a>>b>>c;
	vector<int>v1;
	for(int i=0;i<a;i++){
		int d1;
		cin>>d1;
		v1.push_back(d1);	
	}
	vector<vector<int> >v2;
	vector< pair <float,int> > v4;
	float d3 = 0;
	for(int i1=0;i1<b;i1++){
		int d,e,f;
		cin>>d>>e>>f;
		vector<int>v3;
		v3.push_back(d);
		v3.push_back(e);
		v3.push_back(f);
		for(int i2=0;i2<d;i2++)
		{
			int d1;
			cin>>d1;
			d3=d3+v1[d1];
			v3.push_back(d1);
				}
		//cout<<d3<<endl;
		v2.push_back(v3);
		v3.clear();
		d3=d3/d*f;
		v4.push_back( make_pair(d3,i1) );
		d3 = 0;
	}
	sort(v4.begin(),v4.end());
	//cout<<v4[v4.size()-2].first<<" "<<v4[v4.size()-2].second<<endl;
	//cout<<v2[1][1];
	//find(v4.begin(),v4.end(),3.5);
	int p1=0;
	vector<vector<int> >v5;
	for(int i3=0;i3<b;i3++){
		vector<int>v6;
		if(c>v2[v4[v4.size()-1-i3].second][1]){
			p1=p1+1;
			v6.push_back(v4[v4.size()-1-i3].second);
			c=c-v2[v4[v4.size()-1-i3].second][1];
			if(c>(v2[v4[v4.size()-1-i3].second][0]/v2[v4[v4.size()-1-i3].second][2])){
				//cout<<v2[v4[v4.size()-1].second][]
				int p=v2[v4[v4.size()-1-i3].second][0];
				v6.push_back(p);
				//cout<<p<<endl;
				for(int i4=0;i4<p;i4++){
					
					//cout<<v2[v4[v4.size()-1-i3].second][i4+3];
					v6.push_back(v2[v4[v4.size()-1-i3].second][i4+3]);
				}
			}
			else{
				v6.push_back(c);
				for(int i4=0;i4<c;i4++){
					
					//cout<<v2[v4[v4.size()-1-i3].second][i4+3];
					v6.push_back(v2[v4[v4.size()-1-i3].second][i4+3]);
				}
			}
			//cout<<endl;
		}
		v5.push_back(v6);
		v6.clear();
	}
	cout<<"the output"<<endl;
	cout<<p1<<endl;
	//cout<<v2[1][5]<<endl;
	for(int i7=0;i7<p1;i7++){
		cout<<v5[i7][0]<<v5[i7][1]<<endl;
		for(int i8=0;i8<v5[i7][1];i8++){
			cout<<v5[i7][i8+2];
		}
		cout<<endl;
	}
	
}
