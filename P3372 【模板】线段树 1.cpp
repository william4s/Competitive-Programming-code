//============================================================================
// Author      : william4s
// Description : segment tree
// Date        : 2020.9.19
//============================================================================
#include <bits/stdc++.h>

using namespace std;

const int Max = 1e5+5;
//������        ԭ����     ������      �ڵ�       ����ķ�Χ
void build_tree(int arr[], int tree[], int node, int start, int last)
{
	if(start == last)
	{
		tree[node] = arr[start];
	}
	else
	{
		int mid = (start + last) / 2;
		int left_node = 2 * node + 1;
		int right_node = 2 * node + 2;
		build_tree(arr, tree, left_node, start, mid);
		build_tree(arr, tree, right_node, mid + 1, last);
		tree[node] = tree[left_node] + tree[right_node];
	}

}
//                ԭ����     ������      �ڵ�                          �޸ĵ�λ��   �޸ĺ���ֵ
void update_tree(int arr[], int tree[], int node, int start, int last, int idx, int val)
{
	if(start == last)
	{
		arr[idx] = val;
		tree[node] = val;
	}
	else
	{
		int mid = (start + last) / 2;
		int left_node = 2 * node + 1;
		int right_node = 2 * node + 2;
		if(idx >= start && idx <= mid)
		{
			update_tree(arr, tree, left_node, start, mid, idx, val);
		}
		else
		{
			update_tree(arr, tree, right_node, mid + 1, last, idx, val);
		}
		tree[node] = tree[left_node] + tree[right_node];
	}
}
// ��ѯ����[L,R]�ĺ�
int query_tree(int arr[], int tree[], int node, int start, int last, int L, int R)
{
	/*	cout << "start = " << start << endl;
		cout << "end   = " << last << endl;
		cout << endl;
	*/
	if(R < start || L > last)
	{
		return 0;
	}
	else if(L <= start && last <= R)
	{
		return tree[node];
	}
	else if(start == last)
	{
		return tree[node];
	}
	else
	{
		int mid = (start + last) / 2;
		int left_node = 2 * node + 1;
		int right_node = 2 * node + 2;
		int sum_left = query_tree(arr, tree, left_node, start, mid, L, R);
		int sum_right = query_tree(arr, tree, right_node, mid+1, last, L, R);
		return sum_left + sum_right;
	}
}

int main()
{
	std::ios::sync_with_stdio(false);
	int n ,m;
	int arr[Max]= {0};
	int tree[Max] = {0};
	cin>>n>>m;
	for(int i=0; i<n; i++)
		cin>>arr[i];
	//Build Tree
	build_tree(arr, tree, 0, 0, n - 1);
	while(m--)
	{
		int mod,x,y,k;
		cin>>mod;
		if (mod==1)
		{
			cin>>x>>y>>k;
			for (int i=x; i<=y; i++)
				update_tree(arr,tree,0,0,n-1,i, k);
		}
		else
		{
			cin>>x>>y;
			cout<<query_tree(arr,tree,0,0,n-1,x,y)<<endl;
		}
	}
	return 0;
}
