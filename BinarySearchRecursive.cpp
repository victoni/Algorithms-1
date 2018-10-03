//lavishsaluja
#include<bits/stdc++.h>
using namespace std;
#define ln endl
#define debug1(x) cout<<x<<"\n"
#define debug2(x,y) cout<<x<<"-->"<<y<<"\n"
#define debug3(x,y,z) cout<<x<<"-->"<<y<<"-->"<<z<<"\n"

int BinarySearch(int* array, int low, int high, int key)
{
	if(high >= low)
	{
		int mid = (low+high)/2;
		if(array[mid] == key)
			return mid;
		if(array[mid] > key)
			return BinarySearch(array,low,mid-1,key);
		return BinarySearch(array,mid+1,high,key);
	}
	return -1;
}

//driving function
int main(void){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt","w",stdout);
	#endif
		
	int n;
	cin>>n;
	int array[n];
	for(int i = 0; i < n; i ++)
	{
		cin>>array[i];
	}
	int key;
	cin>>key;
	
	int low = 1, high = n;
	int r = BinarySearch(array, low, high, key);
	cout<<r;
	return 0;
}