vector <int> bfs(vector<int> g[], int N) 
{
int arr[N];
vector<int> v;
for(int i=0;i<N;i++)
{
    arr[i]=-1;
}
queue<int> q;
arr[0]=1;
q.push(0);

while(q.empty()==false)
{
    int z=q.front();
    q.pop();
    v.push_back(z);
    for(int j:g[z])
    {
        if(arr[j]==-1)
        {
            arr[j]=1;
            q.push(j);
        }
    }
}
 return v;   
}