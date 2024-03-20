// vector<int> searchInTheArray(vector<int> &arr, vector<int> &queries, int n, int q)
// {
//     vector<int> answer;

//     int prefixSum[n + 1] = {0};

//     for (int i = 0; i < n; i++)
//     {
//         prefixSum[i + 1] = prefixSum[i] + arr[i];
//     }

//     for (int i = 0; i < q; i++)
//     {
//         int l = 0;
//         int r = n - 1;
//         int target = queries[i];
//         while (l <= r)
//         {
//             int mid = (l + r) / 2;
//             if (arr[mid] > target)
//             {
//                 r = mid - 1;
//             }
//             else
//             {
//                 l = mid + 1;
//             }
//         }

//         if (l < n && arr[l] == target)
//         {
//             l += 1;
//         }
//         answer.push_back(prefixSum[l]);
//     }

//     return answer;
// }

// #include <bits/stdc++.h>
// vector<int> searchInTheArray(vector<int>& arr, vector<int>& queries, int n, int q)
// {
// 	vector<int> ans;
// 	int sum=0;

// 	for(int i=0;i<q;i++){
// 		sum=0;
// 		for(int j=0;j<n;j++){
// 			if(queries[i] < arr[j]){
// 				break;
// 			}
// 			sum+=arr[j];
// 		}
// 		ans.push_back(sum);
// 	}

// 	return ans;
// }
