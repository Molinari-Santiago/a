#include <bits\stdc++.h>
using namespace std;
 bool BuscaVal(vector <int> v , int val);
 vector<int>GenerarVector(vector<int>v , int n);
 void MostrarVector(vector<int>v);
 int main(){
 int n=8, val;
 vector<int> v;
 cout<<"ingrese valor: "<<endl;
 cin>>val;	
  v=GenerarVector(v,n);
 MostrarVector(v);
 v=GenerarVector(v,n);
bool vec=BuscaVal( v ,val);
if(vec=true){
cout<<"true"<<endl;
 }
if(vec=false){
cout<<"false"<<endl;
 }
 	
 return 0;}
 vector<int>GenerarVector(vector<int> v, int N)
{
	int i;        
	srand (time (NULL));
	int e;
	for(i=0; i<N; i++)
	{
		e=rand()%10;
		
	v.push_back (e);
	}
	return v;
}
void MostrarVector(vector <int>v)
{
	int i;
	
	for( i=0; i<v.size(); i++ )
	{
	
	cout<<v[i]<<"/";
	}
		cout<<endl;
}
 bool BuscaVal(vector <int> v , int val){
 	bool flag;
    for(int i=0; i<v.size(); i++){
    if(v[i]==val){
    	flag=true;
	}else{
		flag=false;
	}}
	return flag;
}
	
	
	



	
