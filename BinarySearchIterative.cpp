//lavishsaluja
#include<bits/stdc++.h>
using namespace std;
#define debug1(x) cout<<x<<"\n"
#define debug2(x,y) cout<<x<<"-->"<<y<<"\n"
#define debug3(x,y,z) cout<<x<<"-->"<<y<<"-->"<<z<<"\n"

int BinarySearch(int* array, int n,int key)
{
	int mid,low = 1,high = n;
	while(low < high)
	{
		mid = (low+high)/2;
		if(array[mid] == key)
		{
			return mid;
		}
		else
		{
			if(key < array[mid])
			{
				high = mid - 1;
			}
			else
			{
				low = mid + 1;
			}
		}
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
	int array[n],key;
	for(int i = 0; i < n; i ++)
		cin>>array[i];
	cin>>key;
	cout<<BinarySearch(array,n,key);
	return 0;
}
